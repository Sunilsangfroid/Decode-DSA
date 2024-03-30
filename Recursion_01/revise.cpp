#include<iostream>
using namespace std;
int power(int a,int b){
    if(a==0 && b==0){
        cout<<"0 raised to the power 0 is not defined.";
        return -100;
    }
    if(a==0) return 0;
    if(b==0) return 1;
    return a * power(a,b-1);
}
// int sum(int i,int n){
//     if(i>n) return 0;
//     return i+sum(i+1,n);
// }
// int osum(int n){
//     if(n==0) return 0;
//     return n+osum(n-1);
// }
// void print(int n){
//     if(n==0) return;
//     // cout<<n<<endl;
//     print(n-1);
//     cout<<n<<endl;
// }
// void factupto(int n){
//     int f=1;
//     for(int i=1;i<=n;i++){
//         f*=i;
//         cout<<f<<endl;
//     }
// }
// int factorial(int n){
//     if(n==0) return 1;
//     return n*factorial(n-1);
// }
// void greet(int n){
//     if(n==0) return;
//     cout<<"Welcome to physicswallah"<<endl;
//     greet(n-1);
// }

// void fun(){
//     cout<<"hello pw";
// }

// void gun(){
//     fun();
//     cout<<"hello cw";
// }
int main(){
    cout<<power(0,1);
}
