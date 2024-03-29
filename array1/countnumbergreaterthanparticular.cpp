#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of array: ";
    int n;
    cin>>n;
    int array[n];
    int p;
    for(int i=0;i<=n-1;i++){
        cout<<"Enter the number: ";
        cin>>p;
        array[i]=p;
    }
    int count=0;
    int x;
    cout<<"TO find: ";
    cin>>x;
    for(int i=0;i<n;i++){
        if(array[i]>x){
            count+=1;
        }
        
    }
    cout<<count;
}
