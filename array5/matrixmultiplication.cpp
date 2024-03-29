#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows of 1st matrix: ";
    cin>>m;
    int n;
    cout<<"Enter columns of 1st matrix: ";
    cin>>n;
    int p;
    cout<<"Enter rows of 2nd matrix: ";
    cin>>p;
    int o;
    cout<<"Enter columns of 2nd matrix: ";
    cin>>o;
    if(n==p){
        int a[m][n];
        cout<<"enter element of first matrix: ";
        for(int i=0;i<=m-1;i++){
            for(int j=0;j<=n-1;j++){
                cin>>a[i][j];
            }
            cout<<endl;
        }
        int b[p][o];
        cout<<"enter element of second matrix: ";
        for(int i=0;i<=p-1;i++){
            for(int j=0;j<=o-1;j++){
                cin>>b[i][j];
            }
            cout<<endl;
        }
        // resultant matrix
        int mult[m][o];
        for(int i=0;i<=m-1;i++){
            for(int j=0;j<=o-1;j++){
                mult[i][j]=0;
                // mult[i][j]=a[i][0]*b[0][j] + a[i][1]*b[1][j] + a[i][2]*b[2][j] + .....................
                for(int k=0;k<=p-1;k++){
                    mult[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(int i=0;i<=m-1;i++){
            for(int j=0;j<=o-1;j++){
                cout<<mult[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    else{
        cout<<"Given two matrix cannot multiply together.";
    }
    
}