#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int>& nums) {
    int zero=0;
    int one=0;
    int two=0;
    for(int i=0;i<=nums.size()-1;i++){
        if(nums[i]==0){
            zero++;
        }
        else if(nums[i]==1){
            one++;
        }
        else{
            two++;
        }
    }
    for(int i=0;i<=nums.size()-1;i++){
        if(i<=zero-1){
            nums[i]=0;
        }
        else if(i<(zero+one)){
            nums[i]=1;
        }
        else{
            nums[i]=2;
        }
    }
}
void display(vector<int>&v){
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int a;
    cout<<"Enter the size: ";
    cin>>a;
    vector<int>v;
    for(int i=0;i<a;i++){
        cout<<"Enter the ball: ";
        int b;
        cin>>b;
        v.push_back(b);
    }
    sortColors(v);
    display(v);
}
