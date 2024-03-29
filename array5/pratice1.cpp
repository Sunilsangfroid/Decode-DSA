#include<iostream>
using namespace std;
int main(){
    int r1;
    cout<<"Enter the number of rows of mareix 1: ";
    cin>>r1;
    int c1;
    cout<<"Enter the number of columns of matrix 1: ";
    cin>>c1;
    int r2;
    cout<<"Enter the number of rows in matrix 2: ";
    cin>>r2;
    int c2;
    cout<<"Enter the number of columns in matrix 2: ";
    cin>>c2;
    if(c1==r2){
        int m1[r1][c1];
        cout<<"Enter the elements of matrix 1: ";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cin>>m1[i][j];
            }
        }
        int m2[r2][c2];
        cout<<"Enter the elements of matrix 2: ";
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                cin>>m2[i][j];
            }
        }
        int result[r1][c2];
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                result[i][j]=0;
                for(int k=0;k<c1;k++){
                    result[i][j]+=m1[i][k]*m2[k][j];
                }
            }
        }
        for(int p=0;p<r1;p++){
            for(int q=0;q<c2;q++){
                cout<<result[p][q]<<" ";
            }
            cout<<endl;
        }
    }
}