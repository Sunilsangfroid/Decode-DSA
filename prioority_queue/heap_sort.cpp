#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Maxheap{
    vector<int>hp;
    int i;
    void unheapify(int ci){
        while(ci>0){
            int pi=(ci-1)/2;
            if(hp[pi]<hp[ci]){
                swap(hp[pi],hp[ci]);
                ci=pi;
            }
            else{
                break;
            }
        }
    }
    void downheapify(int idx,int bound){
        while(idx <hp.size()){
            int lc=2*idx+1;
            int rc=2*idx+2;
            if(lc>=bound) break;
            int mxEle=idx;
            if(hp[lc]>hp[mxEle]){
                mxEle=lc;
            }
            if(rc<bound && hp[rc]>hp[mxEle]){
                mxEle=rc;
            }
            if(mxEle!=idx){
                swap(hp[mxEle],hp[idx]);
                idx=mxEle;
            }
            else{
                break;
            }

        }
    }
    
public:
    void display(){
        for(int i=0;i<hp.size();i++){
            cout<<hp[i]<<" ";
        }
    }
    void pop(){
        if(empty()) return;
        swap(hp[0],hp[hp.size()-1]);
        //hp.pop_back();
        i--;
        downheapify(0,i);
    }
    
    void push(int element){
        hp.push_back(element);
        unheapify(hp.size()-1);
    }
    int peek(){
        if(hp.size()==0) return INT_MIN;
        else return hp[hp.size()-1];
    }
    bool empty(){
        if(hp.size()==0) return true;
        else false;
    }
    Maxheap(vector<int>v){
        int n=hp.size();
        i=n;
        hp=v;
        for(int j=n/2;j>=0;j--){
            downheapify(j,i);
        }
    }
    vector<int>heapsort(){
        int sz=hp.size();
        while(sz>0){
            int ele=0;
            swap(hp[ele],hp[i]);
            sz--;
            i--;
            downheapify(0,i);
        }
        return hp;
    }
};
void heapsort(vector<int>&v){
    Maxheap hp(v);
    v=hp.heapsort();
}
int main(){
    vector<int>v{9,6,1,19,3,2,8,12,5};
    heapsort(v);
    for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
    }
}