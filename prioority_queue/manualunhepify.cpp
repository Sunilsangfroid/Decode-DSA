#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Maxheap{
    vector<int>hp;
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
    void downheapify(int idx){
        while(idx <hp.size()){
            int lc=2*idx+1;
            int rc=2*idx+2;
            if(lc>=hp.size()) break;
            int mxEle=idx;
            if(hp[lc]>hp[mxEle]){
                mxEle=lc;
            }
            if(rc<hp.size() && hp[rc]>hp[mxEle]){
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
        hp.pop_back();
        downheapify(0);
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
};
int main(){
    Maxheap hp;
    hp.push(10);
    hp.push(7);
    hp.push(90);
    hp.push(12);
    hp.push(78);
    hp.push(26);
    hp.push(67);
    hp.push(400);
    hp.display();
    cout<<endl;
    hp.pop();
    hp.display();
}