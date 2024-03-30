#include<iostream>
using namespace std;
void hanoi(int n , char a, char b, char c){
    if(n==0) return;  // base case
    hanoi(n-1, a, c, b);
    cout<<a<<"->"<<c<<endl;
    hanoi(n-1, b, a, c);
}
int main(){
    int n=64;
    hanoi(n, 'A', 'B', 'C');
}