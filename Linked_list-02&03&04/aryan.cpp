#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;
vector<int> tree;
vector<int> lazy; // Add the lazy array

void build_segment_tree(int node, int start, int end) {
    if (start == end) {
        tree[node] = arr[start];
        return;
    }

    int mid = (start + end) / 2;
    build_segment_tree(2 * node, start, mid);
    build_segment_tree(2 * node + 1, mid + 1, end);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

void update_segment_tree(int node, int start, int end, int idx, int value) {
    if (start == end) {
        arr[idx] = value;
        tree[node] = value;
        return;
    }

    int mid = (start + end) / 2;
    if (start <= idx && idx <= mid) {
        update_segment_tree(2 * node, start, mid, idx, value);
    } else {
        update_segment_tree(2 * node + 1, mid + 1, end, idx, value);
    }
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

void increment_segment_tree(int node, int start, int end, int left, int right, int add_value) {
    if (lazy[node] != 0) {
        tree[node] += lazy[node] * (end - start + 1); // Update the node's value
        if (start != end) {
            lazy[2 * node] += lazy[node];
            lazy[2 * node + 1] += lazy[node];
        }
        lazy[node] = 0;
    }

    if (left > end || right < start) {
        return;
    }

    if (left <= start && right >= end) {
        tree[node] += add_value * (end - start + 1); // Update the node's value
        if (start != end) {
            lazy[2 * node] += add_value;
            lazy[2 * node + 1] += add_value;
        }
        return;
    }

    int mid = (start + end) / 2;
    increment_segment_tree(2 * node, start, mid, left, right, add_value);
    increment_segment_tree(2 * node + 1, mid + 1, end, left, right, add_value);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}




int query_segment_tree(int node, int start, int end, int left, int right) {
    if (lazy[node] != 0) {
        tree[node] += lazy[node] * (end - start + 1); // Update the node's value
        if (start != end) {
            lazy[2 * node] += lazy[node];
            lazy[2 * node + 1] += lazy[node];
        }
        lazy[node] = 0;
    }

    if (left <= start && right >= end) {
        return tree[node];
    }

    if (right < start || left > end) {
        return 0;
    }

    int mid = (start + end) / 2;
    int left_sum = query_segment_tree(2 * node, start, mid, left, right);
    int right_sum = query_segment_tree(2 * node + 1, mid + 1, end, left, right);
    return left_sum + right_sum;
}


int main() {
    int n, k;
    cin >> n >> k;
    arr.resize(n);
    tree.resize(4 * n);
    lazy.resize(4 * n, 0); // Initialize the lazy array with zeros

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    build_segment_tree(1, 0, n - 1);

    for (int i = 0; i < k; i++) {
        char command;
        cin >> command;

        if (command == 'U') {
            int position, new_value;
            cin >> position >> new_value;
            update_segment_tree(1, 0, n - 1, position - 1, new_value);
        } else if (command == 'I') {
            int left, right, add_value;
            cin >> left >> right >> add_value;
            increment_segment_tree(1, 0, n - 1, left - 1, right - 1, add_value);
        } else if (command == 'G') {
            int position;
            cin >> position;
            int result = query_segment_tree(1, 0, n - 1, position - 1, position - 1);
            cout << result << endl;
        }
    }

    return 0;
}