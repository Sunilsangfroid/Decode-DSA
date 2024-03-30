#include<iostream>
using namespace std;
void omita(string ans,string org){
    if(org.length()==0){
         cout<<ans;
         return;
    }
    char ch=org[0];
    if(ch=='a'){
        omita(ans,org.substr(1));
    }
    else{
        omita(ans+ch,org.substr(1));
    }
}
// void hanoi(int n,char a,char b,char c){
//     if(n==0) return;
//     hanoi(n-1,a,c,b);
//     cout<<a<<"->"<<c<<endl;
//     hanoi(n-1,b,a,c);
// }
// void display(int *arr,int n,int i){
//     if(i==n) return;
//     // cout<<arr[i]<<" ";
//     display(arr,n,i+1);
//     cout<<arr[i]<<" ";
// }
// void maxdisplay(int *arr,int n,int i,int max){
//     if(i==n) cout<<max;
//     if(arr[i]>max) max=arr[i];
//     maxdisplay(arr,n,i+1,max);
// }
// int maxinarray(int arr[],int n,int i){
//     if(i==n) return 0;
//     return max(arr[i],maxinarray(arr,n,i+1));
// }
int main(){
    // hanoi(3,'A','B','C');
    // int arr[]={23,45,3,52,14,146,87,999};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // maxdisplay(arr,n,0,0);
    // cout<<maxinarray(arr,n,0);
    string s="Raghav garg";
    omita("",s);
}
