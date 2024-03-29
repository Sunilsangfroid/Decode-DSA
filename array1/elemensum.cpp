#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the sixze of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the number: ";
    for(int i=0;i<=size-1;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int j=0;j<=size-1;j++){
        sum+=arr[j];
    }
    cout<<"The sum of all elements in the array is: "<<sum;
}