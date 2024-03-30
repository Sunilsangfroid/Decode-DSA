#include<iostream>
#include <bits/stdc++.h>
using namespace std;
const int MAXN=100005;
int tree[4*MAXN],n;
void updateRangeUtil(int si,int ss,int se,int us,int ue,int diff){
    if(us>ue)return;
    if(ss==us && se==ue){
        tree[si]+=diff;
        return;
    }
    int mid=(ss+se)/2;
    updateRangeUtil(si*2+1,ss,mid,us,min(ue,mid),diff);
    updateRangeUtil(si*2+2,mid+1,se,max(us,mid+1),ue,diff);
}
void updateRange(int us,int ue,int diff){
    updateRangeUtil(0,0,n-1,us,ue,diff);
}
int query(int v,int tl,int tr,int pos){
    if(tl==tr){
        return tree[v];
    }
    int mid=(tl+tr)/2;
    if(pos<=mid){
        return tree[v]+query(v*2+1,tl,mid,pos);
    } 
    else{
        return tree[v]+query(v*2+2,mid+1,tr,pos);
    }
}

int main(){
    int k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        updateRange(i,i,x);
    }
    while(k--){
        char type;
        cin>>type;
        if(type=='G'){
            int pos;
            cin>>pos;
            int result=query(0,0,n-1,pos-1);
            cout<<result<<endl;
        } 
        else if(type=='U'){
            int pos,new_value;
            cin>>pos>>new_value;
            int old_value=query(0,0,n-1,pos-1)-query(0,0,n-1,pos-2);
            updateRange(pos-1,pos-1,new_value-old_value);
        } 
        else if(type=='I'){
            int left,right,add_value;
            cin>>left>>right>>add_value;
            updateRange(left-1,right-1,add_value);
        }
    }
}
