#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,6,1,7};
    int *ptr=arr;//giving address
    cout<<ptr<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr[0]<<endl;;
    ptr[0]=8;// or we can use *ptr=8 using pointer we can modify
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }
}