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
    int max=INT_FAST16_MIN;//int max=INT_MIN
    for(int i=0;i<=size-1;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int smax=INT_FAST16_MIN;
    for(int i=0;i<=size-1;i++){
        if(smax!=max && smax<arr[i]){
            smax=arr[i];
        }

    }
    cout<<smax;
}