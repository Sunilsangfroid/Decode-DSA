#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int brr[n];
    int max=arr[0];
    brr[0]=-1;
    for(int i=1;i<n;i++){
        brr[i]=max;
        if(max<arr[i]) max=arr[i];  
    }
    int crr[n];
    int max2=arr[n-1];
    crr[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        crr[i]=max2;
        if(max2<arr[i]) max2=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<crr[i]<<" ";
    }
    int drr[n];
    for(int i=0;i<n;i++){
        drr[i]=min(brr[i],crr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<drr[i]) count+=(drr[i]-arr[i]);
    }
    cout<<count;
}