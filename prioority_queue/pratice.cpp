#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Maxheap{
    vector<int>hp;
public:
    void unheapify(int ci){
        while(ci>0){
            int pi=(ci-1)/2;
            if(hp[pi]<hp[ci]){
                swap(hp[pi],hp[ci]);
                ci=pi;
            }
            else break;
        }
    }
    void downheapify(int idx){
        int maxele=idx;
        while(idx<hp.size()){
            int lc=2*idx + 1;
            int rc=2*idx + 2;
            if(lc>hp.size()-1) break;
            if(hp[lc]>hp[maxele]) maxele=lc;
            if(rc<hp.size() && hp[rc]>hp[maxele]) maxele=rc;
            if(maxele!=idx){
                swap(hp[maxele],hp[idx]);
                idx=maxele;
            }
            else break;
        }
    }
    void push(int element){
        hp.push_back(element);
        unheapify(hp.size()-1);
    }
    void pop(){
        if(isempty()) return;
        swap(hp[0],hp[hp.size()-1]);
        hp.pop_back();
        downheapify(0);
    }
    void display(){
        for(int i=0;i<hp.size();i++){
            cout<<hp[i]<<" ";
        }
    }
    bool isempty(){
        if(this->hp.size()!=0) return false;
        else return true;
    }
    int peak(){
        if(hp.size()==0) return INT_MIN;
        else return hp[0];
    }
};
int main(){
    Maxheap p;
    p.push(20);
    p.push(90);
    p.push(99);
    p.push(12);
    p.push(-8);
    p.push(67);
    p.push(10);
    p.push(23);
    p.push(54);
    p.push(123);
    cout<<p.isempty();
}