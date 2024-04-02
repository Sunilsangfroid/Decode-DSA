#include<iostream>
#include<stack>
using namespace std;
void fun(int n){
    stack<int> s;
    while (n > 0){
    s.push(n%2);
    n = n/2;
    }
    while (!s.empty()){
    cout<<s.top();
    s.pop();
    }
}
int main(){
    fun(12);
    cout<<endl;
    cout<<"Answer is option 2 i.e, It represents the binary representation of given(n) ";
}