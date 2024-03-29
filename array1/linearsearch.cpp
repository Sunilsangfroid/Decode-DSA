#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the choosing number in the array: ";
    int x;
    cin>>x;
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<=size-1;i++){
        cin>>arr[i];
    }
    //check mark
    bool flag=false;//false->not present
    for(int i=1;i<=size-1;i++){
        if(arr[i]==x){
            flag=true;
        }
    }
    if(flag==true) cout<<"element found";
    else cout<<"element not found";

}