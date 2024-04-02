#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={1,9,4,78,9,23,74,0,1,45,67};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ngt[n];

    //Brute force
    // for(int i=0;i<n;i++){
    //     ngt[i]=-1;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]>arr[i]){
    //             ngt[i]=arr[j];
    //             break;
    //         }
    //     }
    // }

    ngt[n-1]=-1;
    stack<int>st;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && st.top()<arr[i]){
            st.pop();
        }
        if(st.size()==0) ngt[i]=-1;
        else ngt[i]=st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        cout<<ngt[i]<<" ";
    }
}