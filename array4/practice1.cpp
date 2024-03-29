#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={1,3,5,6,8,9,2,1,4,5,6,7};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}