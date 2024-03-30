#include<iostream>
using namespace std;
// void greet(){
//     cout<<"Good Morning"<<endl;
//     cout<<"How are you ?"<<endl;
// }
// int product(int a,int b){
//     return a*b;
// }
// int main(){
//     cout<<product(2,4);
//     cout<<endl;
//     greet();
// }
void greet(int n){
    cout<<"Good Morning"<<endl;
    if(n==0) return;
    else{
        greet(n-1);
    }
}
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    greet(n);
}
