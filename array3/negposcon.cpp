#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void exchange(vector<int>&v){
    int s=v.size();
    int i=0;
    int j=s-1;
    while(i<j){
        if(v[i]<0){
            i++;
        }
        if(v[j]>0){
            j--;
        }
        if(i>j){
            break;
        }
        if(v[i]>0 && v[j]<0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
}
int main(){
    int y;
    cout<<"Enter the size: ";
    cin>>y;
    vector<int>v;
    for(int i=0;i<=y-1;i++){
        int o;
        cout<<"enter the integer: ";
        cin>>o;
        v.push_back(o);
    }
    exchange(v);
    display(v);
}