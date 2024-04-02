#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={1,9,4,78,9,23,74,0,1,45,67};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pgi[n];
    stack<int>st;
    pgi[0]=1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(st.size()>0 && arr[st.top()]<arr[i]){
            st.pop();
        }
        if(st.size()==0) pgi[i]=-1;
        else pgi[i]=st.top();
        pgi[i]=i-pgi[i];
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<pgi[i]<<" ";
    }
    
}