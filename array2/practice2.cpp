#include<iostream>
using namespace std;
int main(){
    int arr[]={43,24,494,901,8985954};
    int n= sizeof(arr)/sizeof(arr[0]);
    int* ptr=arr;
    *ptr=123;
    ptr++;
    *ptr=90000000;
    ptr--;
    for(int i=0;i<n;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
}
