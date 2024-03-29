#include<iostream>
#include<vector>
using namespace std;
void display(){}
vector<int> ref(vector<int> &arr1,vector<int> &arr2){
    int m , n;
    m=arr1.size();
    n=arr2.size();
    vector<int>ans(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            ans[k]=arr1[i];
            i++;
        }
        if(arr2[j]<arr1[i]){
            ans[k]=arr2[j];
            j++;
        }
        k++;
    if(i==m) {
        while(j<=n-1){
            ans[k]=arr2[j];
            j++;
            k++;
        }
    }
    if(j==n){
        while(i<=m-1){
            ans[k]=arr1[i];
            i++;
            k++;
        }
    }
    return ans;
}
int main();{
    vector<int>arr1;
    arr1.push_back(2);
    arr1.push_back(4);
    arr1.push_back(7);
    arr1.push_back(80);
    vector<int>arr2;
    arr2.push_back(5);
    arr2.push_back(8);
    arr2.push_back(10);
    arr2.push_back(15);
    arr2.push_back(78);
    vector<int> ans=ref(arr1,arr2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
