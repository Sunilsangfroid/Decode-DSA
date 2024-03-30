#include<iostream>
using namespace std;
int sumrange(int s,int d,int sum){
    if(s>d) return 0;
    if(s==d && s%2!=0) {
        sum+=s;
        return sum;
    }
    if(s%2!=0){
        return s+sumrange(s+2,d,sum);
    }
    else{
        return sumrange(s+1,d,sum);
    }
}
int main(){
    int s,d;
    cin>>s>>d;
    if(s>d) swap(s,d);
    cout<<sumrange(s,d,0);
}