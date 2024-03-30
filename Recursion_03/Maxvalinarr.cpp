#include<iostream>
#include<climits>
using namespace std;
// void printmax(int arr[],int n,int idx, int max){
//     if(idx==n){
//         cout<<"THE MAXIMUM ELEMENT IN THE GIVEN ARRAY IS: "<<max;
//         return;
//     }
//     if(max<arr[idx]){
//         max=arr[idx];
//     }
//     printmax(arr,n,idx+1,max);
// }
int maxinarray(int arr[],int n, int idx){
    if(idx==n) return INT_MIN;
    return (max(arr[idx],maxinarray(arr,n,idx+1)));
}
int main(){
    int arr[]={12,45,8,90,23546,67,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    //printmax(arr,n,0,INT_MIN);
    cout<<maxinarray(arr,n,0);
}