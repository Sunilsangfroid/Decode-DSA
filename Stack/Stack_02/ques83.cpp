#include<iostream>
#include<stack>
#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main(){
    int arr[]={2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int nsi[n];
    stack<int>st;
    nsi[n-1]=n;
    st.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(st.size()==0) nsi[i]=n;
        else nsi[i]=st.top();
        st.push(i);
    }
    int psi[n];
    stack<int>sta;
    psi[0]=-1;
    sta.push(0);
    for(int i=1;i<n;i++){
        while(sta.size()>0 && arr[sta.top()]>arr[i]){
            sta.pop();
        }
        if(sta.size()==0) psi[i]=-1;
        else psi[i]=sta.top();
        sta.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<nsi[i]<<" "<<psi[i]<<" ";
    }
    int maxarea[n];
    int Max=INT_MIN;
    for(int i=0;i<n;i++){
        maxarea[i]=(nsi[i]-psi[i]-1)*arr[i];
        Max=max(Max,maxarea[i]);
    }
    cout<<Max;
    
}