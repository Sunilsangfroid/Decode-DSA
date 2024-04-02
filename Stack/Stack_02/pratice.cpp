// #include<iostream>
// #include<stack>
// using namespace std;
// int priority(char s){
//     if(s=='+' || s=='-') return 1;
//     else return 2;
// }
// int solve(char op,int val1,int val2){
//     if(op=='+') return val1+val2;
//     if(op=='-') return val1-val2;
//     if(op=='*') return val1*val2;
//     else return val1/val2;
// }
// int main(){
//     string s;
//     cin>>s;
//     stack<int>val;
//     stack<char>oper;
//     for(int i=0;i<s.length();i++){
//         if(s[i]>=48 && s[i]<=57){
//             val.push(s[i]-48);
//         }
//         else{
//             if(oper.size()==0 || priority(s[i])>priority(oper.top())){
//                 oper.push(s[i]);
//             }
//             else{
//                 while(oper.size()>0 && priority(s[i])<=priority(oper.top())){
//                     int val2=val.top();
//                     val.pop();
//                     int val1=val.top();
//                     val.pop();
//                     char opy=oper.top();
//                     oper.pop();
//                     int ans=solve(opy,val1,val2);
//                     val.push(ans);
//                 }
//                 oper.push(s[i]);
//             }
            
//         }
//     }
//     while(oper.size()>0){
//         int y=val.top();
//         val.pop();
//         int x=val.top();
//         val.pop();
//         char o=oper.top();
//         oper.pop();
//         int z=solve(o,x,y);
//         val.push(z);
//     }
//     cout<<val.top();
// }


// #include<iostream>
// #include<stack>
// using namespace std;
// int priority(char s){
//     if(s=='+' || s=='-') return 1;
//     else return 2;
// }
// int solve(char op,int val1,int val2){
//     if(op=='+') return val1+val2;
//     if(op=='-') return val1-val2;
//     if(op=='*') return val1*val2;
//     else return val1/val2;
// }
// int main(){
//     string s;
//     cin>>s;
//     stack<int>val;
//     stack<char>oper;
//     for(int i=0;i<s.length();i++){
//         if(s[i]>=48 && s[i]<=57){
//             val.push(s[i]-48);
//         }
//         else{
//             if(oper.size()==0){
//                 oper.push(s[i]);
//             }
//             else if(s[i]=='(') oper.push(s[i]);
//             else if(oper.top()=='(') oper.push(s[i]);
            
//             else if(s[i]==')'){
//                 while(oper.top()!='('){
//                     int val2=val.top();
//                     val.pop();
//                     int val1=val.top();
//                     val.pop();
//                     char opy=oper.top();
//                     oper.pop();
//                     int ans=solve(opy,val1,val2);
//                     val.push(ans);
//                 }
//                 oper.pop();
//             }
//             else if(priority(s[i])>priority(oper.top())) oper.push(s[i]);
            
//             else{
//                 while(oper.size()>0 && priority(s[i])<=priority(oper.top())){
//                     int val2=val.top();
//                     val.pop();
//                     int val1=val.top();
//                     val.pop();
//                     char opy=oper.top();
//                     oper.pop();
//                     int ans=solve(opy,val1,val2);
//                     val.push(ans);
//                 }
//                 oper.push(s[i]);
//             }
            
//         }
//     }
//     while(oper.size()>0){
//         int y=val.top();
//         val.pop();
//         int x=val.top();
//         val.pop();
//         char o=oper.top();
//         oper.pop();
//         int z=solve(o,x,y);
//         val.push(z);
//     }
//     cout<<val.top();
// }


#include<iostream>
#include<stack>
using namespace std;
int priority(char s){
    if(s=='+' || s=='-') return 1;
    else return 2;
}
string solve(char op,string val1,string val2){
    string p="";
    return p+op+val1+val2;
}
int main(){
    string s;
    cin>>s;
    stack<string>val;
    stack<char>oper;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else{
            if(oper.size()==0 && priority(s[i])>priority(oper.top())){
                oper.push(s[i]);
            }            
            else{
                while(oper.size()>0 && priority(s[i])<=priority(oper.top())){
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    char opy=oper.top();
                    oper.pop();
                    string ans=solve(opy,val1,val2);
                    val.push(ans);
                }
                oper.push(s[i]);
            }
            
        }
    }
    while(oper.size()>0){
        string val2=val.top();
        val.pop();
        string val1=val.top();
        val.pop();
        char opy=oper.top();
        oper.pop();
        string ans=solve(opy,val1,val2);
        val.push(ans);
    }
    cout<<val.top();
}