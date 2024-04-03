#include<iostream>
#include<algorithm>
using namespace std;
int maxDigit(int num){
    int a=0;
    while(num>0){
        if(num>=10){
            int r=num%10;
            num=num/10;
            a=max(a,r);
        }
        else {
            a=max(a,num);
            break;
        }
    }
    return a;
}
int main(){
    int an;
    cin>>an;
    int ans=0;
    while(an!=0){
        ans++;
        an=an-maxDigit(an);
        cout<<an<<"->";
    }
    cout<<endl<<ans;
}