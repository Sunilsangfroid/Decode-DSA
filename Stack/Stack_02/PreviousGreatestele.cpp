#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={1,9,4,78,9,23,74,0,1,45,67};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pgt[n];
    stack<int>st;
    pgt[0]=-1;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top()<arr[i]){
            st.pop();
        }
        if(st.size()==0) pgt[i]=-1;
        else pgt[i]=st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<pgt[i]<<" ";
    }
}