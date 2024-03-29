#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the side of square: ";
    cin>>a;
    int arr[a][a];
    for(int i=0;i<=a-1;i++){
        for(int j=0;j<=a-1;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<=a-1;i++){
        for(int j=0;j<=a-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<=a-1;i++){
        for(int j=0;j<=a-1;j++){
            if(i>j){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<=a-1;i++){
        for(int j=0;j<=a-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}