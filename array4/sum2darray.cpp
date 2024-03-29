#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[3][3]={1,2,3,4,5,6,77,8,9};
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum;
}