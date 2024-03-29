#include<iostream>
using namespace std;
void display(int a[],int size){//a is a pointer which took the address of array[0] so that we acess whole array
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    // int size=sizeof(a)/sizeof(a[0]);
    // cout<<size;// It will give the size of pointer
    cout<<endl;
}
void change(int b[],int size){  //int* b;
    b[0]=4;
}
int main(){
    int arr[]={1,4,2,7,46};
    int size=sizeof(arr)/sizeof(arr[0]);
    //acessing the elements of array in another function
    //updation, pass by value/ reference ?
    cout<<size<<endl;//it will give the size of array
    display(arr,size);
    change(arr,size);
    display(arr,size);
}