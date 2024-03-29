#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={243,-16,89,9000,65,-1234455};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int smax=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(smax<arr[i] && arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<smax;
}