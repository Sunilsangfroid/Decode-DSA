#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter a number: ";
    cin>>m;
    vector<vector<int>>v(m);
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            if(i==j || j==0){
                v[i].push_back(1);
            }
            else{
                v[i].push_back(v[i-1][j]+v[i-1][j-1]);;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
