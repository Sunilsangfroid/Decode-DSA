#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<=size-1;i++){
        cin>>arr[i];
    }
    int max=arr[0];//int max=INT_MIN
    for(int i=0;i<=size-1;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max;
}