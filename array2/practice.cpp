#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={23,67,90,87,563,81992};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
}