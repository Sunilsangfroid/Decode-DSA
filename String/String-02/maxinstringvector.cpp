#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string arr[5]={"00123","67899","674762","4536","890163"};
    int max=stoi(arr[0]);
    string maxs=arr[0];
    for(int i=1;i<5;i++){
        if(stoi(arr[i])>max){
            max=stoi(arr[i]);
            maxs=arr[i];
        }
    }
    cout<<max<<" "<<maxs;
}