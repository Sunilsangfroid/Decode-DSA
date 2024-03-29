#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(vector<int> &arr1, vector<int> &arr2) {
    int m = arr1.size();
    int n = arr2.size();
    vector<int> ans(m + n);

    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            ans[k] = arr1[i];
            i++;
        } else {
            ans[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        ans[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n) {
        ans[k] = arr2[j];
        j++;
        k++;
    }

    return ans;
}

int main() {
    vector<int> arr1 = {2, 4, 7, 80};
    vector<int> arr2 = {5, 8, 10, 15, 78};
    
    vector<int> merged = mergeSortedArrays(arr1, arr2);
    
    for (int i = 0; i < merged.size(); i++) {
        cout << merged[i] << " ";
    }

    return 0;
}
