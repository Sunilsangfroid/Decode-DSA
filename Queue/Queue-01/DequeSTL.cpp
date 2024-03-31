#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_back(10);
    dq.push_front(0);
    dq.pop_back();
}