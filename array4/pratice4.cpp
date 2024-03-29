#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,1,2,3};
    for(int i=0;i<=3;i++){
        for(int j=0;j<=2;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}