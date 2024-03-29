#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int minr=0;
    int maxr=2;
    int minc=0;
    int maxc=3;
    int noty=12;
    int count=0;
    while(minr<=maxr && minc<=maxc){
        // right
        for(int i=minc;i<=maxc && count<noty ;i++){
            cout<<arr[minr][i];
            count++;
        }
        minr++;
        //down
        for(int j=minr;j<=maxr && count<noty;j++){
            cout<<arr[j][maxc];
            count++;
        }
        maxc--;
        //left
        for(int i=maxc;i>=minc && count<noty ;i--){
            cout<<arr[maxr][i];
            count++;
        }
        maxr--;
        //top
        for(int j=maxr;j>=minr && count<noty;j--){
            cout<<arr[j][minc];
            count++;
        }
        minc++;
    }
}