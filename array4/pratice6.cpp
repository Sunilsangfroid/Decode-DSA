#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,1,2,3};
    int t[4][3];
    cout<<endl;
    for(int i=0;i<=3;i++){
        for(int j=0;j<=2;j++){
            t[i][j]=arr[j][i];
        }
        cout<<endl;
    }
    for(int i=0;i<=3;i++){
        for(int j=2;j>=0;j--){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}