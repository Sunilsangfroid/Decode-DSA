#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int Min_prod_subset(vector<int>&v){
    int cp=0;
    int cz=0;
    int cn=0;
    int prod_posi=1;
    int prod_nega=1;
    int max_nega=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) cz++;
        if(v[i]>0) {
            cp++;
            prod_posi*=v[i];
        }
        else {
            cn++;
            prod_nega*=v[i];
            max_nega=max(max_nega,v[i]);
        }
    }
    if(cn==0){
        if(cz>0) return 0;
        else{
            auto lo=min_element(v.begin(),v.end());
            return *lo;
        }
    }
    else{
        if(cn%2==0){
            return (prod_nega/max_nega)*prod_posi;
            //even negative
        }
        else{
            return prod_nega*prod_posi;
            //odd negative
        }
    }
}

int main(){
    vector<int>arr={-2,-3,1,4,-5,-2};
    cout<<Min_prod_subset(arr);
}
