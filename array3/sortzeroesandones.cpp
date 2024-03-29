#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&h){
    for(int i=0;i<=h.size()-1;i++){
        cout<<h[i]<<" ";
    }
}
void swap(vector<int>&a,int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
void sort01(vector<int>&b){
    int q=b.size();
    int i=0;
    int j=q-1;
    while(i<j){
        if(b[i]==0){
            i++;
        }
        if(b[j]==1){
            j--;
        }
        if(i>j)
        break;
        if(b[i]==1 && b[j]==0){
            swap(b[i],b[j]);
            i++;
            j--;
        }
    }
}
int main(){
    vector<int>v;
    cout<<"Enter the size: ";
    int n;
    cin>>n;
    for(int i=0;i<=n-1;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    sort01(v);
    display(v);


}