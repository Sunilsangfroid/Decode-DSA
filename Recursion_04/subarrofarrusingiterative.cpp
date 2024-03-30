#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int p=0;p<=n-1;p++){
        for(int q=p;q<=n-1;q++){
            for(int r=p;r<q+1;r++){
                cout<<arr[r];
            }
            cout<<endl;
        }
    }
}