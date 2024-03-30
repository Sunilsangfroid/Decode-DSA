#include<iostream>
#include<vector>
using namespace std;
// void printsubset(string ans,string org,vector<string>&v){
//     if(org.length()==0){
//         v.push_back(ans);
//         return;
//     } 
//     printsubset(ans+org[0],org.substr(1),v);
//     printsubset(ans,org.substr(1),v);
// }
// int main(){
//     string s="abc";
//     vector<string>v;
//     printsubset("",s,v);
//     for(string ele : v){
//         cout<<ele<<endl;
//     }
// }
void printsubset(int arr[],int n,int i,vector<int>v){
    if(i==n){
        for(int ele : v){
            cout<<ele;
        }
        cout<<endl;
        return;
    } 
    printsubset(arr,n,i+1,v);
    v.push_back(arr[i]);
    printsubset(arr,n,i+1,v);
}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    printsubset(arr,n,0,v);
    
}