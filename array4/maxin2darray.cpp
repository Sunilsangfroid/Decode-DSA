#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[3][3]={1,25,3,4,15,6,7,8,9};
    int max=INT_MIN;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    cout<<max;
}