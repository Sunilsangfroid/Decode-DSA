#include<iostream>
using namespace std;
void display(int i,int n){
    if(i>n) return;
    if(i<n){
        cout<<i<<endl;
    }
    display(i+1,n);
    cout<<i<<endl;


}
int main(){
    int n;
    cin>>n;
    display(1,n);
}