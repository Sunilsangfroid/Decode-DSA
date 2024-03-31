#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="Sunil Patra";
    cout<<s.size(); //->11(with out including null character but include space)
    //cout<<s.length();
    string abc="abcd";
    abc.push_back('e');
    abc.push_back('g'); // only character
    cout<<abc;
    abc.pop_back();
    cout<<" "<<abc;
    string x="sunil";
    string l="loves";
    string y="subhashree";
    x=x + l + y;
    cout<<x;
    cout<<endl;
    // reverse(x.begin(),x.end());
    cout<<x<<endl;

}
