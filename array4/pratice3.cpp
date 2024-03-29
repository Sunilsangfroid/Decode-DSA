#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int brr[3][3]={3,6,8,9,3,1,2,3,4};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]+=brr[i][j];    }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}