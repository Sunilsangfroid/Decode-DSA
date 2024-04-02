#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={6,7,8,1,2,9,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int nge[size];
    // for(int i=0;i<size;i++){
    //     nge[i]=-1;
    //     for(int j=i+1;j<size;j++){
    //         if(arr[j]>arr[i]){
    //             nge[i]=arr[j];
    //             break;
    //         }
    //     }
    // }
    // for(auto k:nge) cout<<k<<" ";
    // stack<int>st;
    // st.push(arr[size-1]);
    // nge[size-1]=-1;
    // for(int i=size-2;i>=0;i--){
    //     while(st.size()>0  && st.top()<=arr[i]) st.pop();
    //     if(st.size()>0)nge[i]=st.top();
    //     else nge[i]=-1;
    //     st.push(arr[i]);
    // }
    // for(auto k:nge) cout<<k<<" ";
    stack<int>st;
    st.push(arr[0]);
    nge[0]=-1;
    for(int i=1;i<size;i++){
        while(st.size()>0  && st.top()<=arr[i]) st.pop();
        if(st.size()>0)nge[i]=st.top();
        else nge[i]=-1;
        st.push(arr[i]);
    }
    for(auto k:nge) cout<<k<<" ";
}