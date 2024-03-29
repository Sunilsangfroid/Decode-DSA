#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;
    int c;
    cout<<"Enter the number of columns: ";
    cin>>c;
    int arr[r][c];
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cout<<"Enter the number: ";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // printing transpose
    // for(int j=0;j<=c-1;j++){
    //     for(int i=0;i<=r-1;i++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // store in a new matrix
    int tran[c][r];
    for(int i=0;i<=c-1;i++){
        for(int j=0;j<=r-1;j++){
            tran[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<=c-1;i++){
        for(int j=0;j<=r-1;j++){
            cout<<tran[i][j]<<" ";
        }
        cout<<endl;
    }

}