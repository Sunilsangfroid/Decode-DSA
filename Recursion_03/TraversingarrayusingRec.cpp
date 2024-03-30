#include<iostream>
#include<vector>
using namespace std;

//USING RECURSION:
void display(int arr[], int n, int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display(arr,n, idx+1);
}

void display2(vector<int>&v,int id){
    if(id==v.size()) return;
    cout<<v[id]<<" ";
    display2(v, id+1);
}
int main(){
    int arr[]={1,7,9,0,5,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    //USING FOR LOOP:

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    //USING WHILE LOOP:

    // int i=n;
    // while(i>0){
    //     cout<<arr[n-i]<<" ";
    //     i--;
    // }

    //USING FOR EACH LOOP:

    // for(int ele:arr){
    //     cout<<ele<<" ";
    // }
    //display(arr, n, 0);
    display2(v,0);

}