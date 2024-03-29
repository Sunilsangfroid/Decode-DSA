#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,3,5,6,8,9,2,1,4};
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            if(i!=j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    
    }

}