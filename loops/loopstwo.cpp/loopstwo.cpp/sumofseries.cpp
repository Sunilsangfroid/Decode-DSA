#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"Enter the last term index: ";
    int n;
    cin>>n;
    int sum=0;
    // for(int i=1;i<=n;i++){
    //     sum+=i*(pow(-1,i+1));
    // }
    // cout<<sum;
    // for(int i=1;i<=n;i++){
    //     if(i%2!=0){
    //         sum+=i;
    //     }
    //     else{
    //         sum-=i;
    //     }
    // }
    // cout<<sum;
    
        if(n%2==0){
            sum+=-n/2;
        }
        else{
            sum=(-(n-1)/2)+n;
        }
        cout<<sum;
}