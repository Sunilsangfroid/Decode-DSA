#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,2,7,1,6};
    int *ptr=arr;
    for(int i=0;i<=5;i++){
        cout<<*ptr<<" ";  // we can use also i[arr] or i[ptr]
        *ptr++;
    }  //lastly pointer save the address of last element of array
    ptr=arr;  //if we will not do this pointer will forget address of array and pointing to first element
    cout<<endl;
    *ptr=8;
    ptr++;   //pointing to second element
    *ptr=9;
    ptr--;  //pointing to first element
    for(int i=0;i<=5;i++){
        cout<<ptr[i]<<" ";
    }
}