#include<iostream>
using namespace std;
void zigzag(int n){
    if(n==0) return;
    cout<<n;
    zigzag(n-1);
    cout<<n;
    zigzag(n-1);
    cout<<n;
}
// int fibonacci(int n){
//     if(n==1 || n==2 ) return 1;
//     return fibonacci(n-2)+fibonacci(n-1);
// }
// int stair(int n){
//     if(n==1) return 1;
//     if(n==2) return 2;
//     if(n==3) return 4;
//     return stair(n-1)+stair(n-2)+stair(n-3);
// }
// int maize(int sr,int sc,int er,int ec){
//     if(sr>er || sc>ec) return 0;
//     if(sr==er && sc==ec) return 1;
//     int rightways=maize(sr,sc+1,er,ec);
//     int downways=maize(sr+1,sc,er,ec);
//     int totalways=rightways+downways;
//     return totalways;
// }
// void printpath(int sr,int sc,int er,int ec,string s){
//     if(sr>er || sc>ec) return;
//     if(sr==er && sc==ec){
//         cout<<s<<endl;;
//         return;
//     } 
//     printpath(sr,sc+1,er,ec,s+'R');
//     printpath(sr+1,sc,er,ec,s+'D');
// }
// int maize2(int er,int ec){
//     if(er<0 || ec<0) return 0;
//     if(er==0 && ec==0) return 1;
//     int rightways=maize2(er,ec-1);
//     int downways=maize2(er-1,ec);
//     int totalways=rightways+downways;
//     return totalways;
// }
// void printmaize2(int er,int ec,string s){
//     if(er<0 || ec<0) return;
//     if(er==0 && ec==0){
//         cout<<s<<endl;
//         return;
//     }
//     printmaize2(er,ec-1,s+'R');
//     printmaize2(er-1,ec,s+'D');
// }
// int power(int x,int n){
//     if(n==0) return 1;
//     if(n%2!=0) {
//         int ans=power(x,n/2);
//         return x*ans*ans;
//     }
//     if(n%2==0) {
//         int ans=power(x,n/2);
//         return ans*ans;
//     }
// }
int main(){
    zigzag(4);
    // int n;
    // cin>>n;
    // int currsum=1;
    // int oldsum=1;
    // for(int i=0;i<n;i++){
    //     cout<<oldsum<<" ";
    //     oldsum=currsum;
    //     currsum+=oldsum;        
    // }
    // cout<<fibonacci(8);
    // cout<<power(8,6);
    // cout<<stair(4);
    // printpath(0,0,3,3,"");
    // cout<<maize2(3,3);
    // printmaize2(3,3,"");
}