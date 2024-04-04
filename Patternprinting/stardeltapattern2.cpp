// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the number of rows: ";
//     int r;
//     cin>>r;
//     for(int i=r;i>=0;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//     cout<<endl;
//     }
// }
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of rows: ";
    int r;
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r+1-i;j++){//number of stars=n+1-i
            cout<<"*";
        }
    cout<<endl;
    }
}