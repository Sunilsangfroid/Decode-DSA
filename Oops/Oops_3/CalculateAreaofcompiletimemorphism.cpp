#include<iostream>
using namespace std;

void calculatearea( int l, int b) {
    cout << l * b << endl;
}
void calculatearea( double a) {
    cout<< a * a << endl;
}
void calculatearea( float r){
    cout<< 3.1414 * r * r <<endl;
}

int main () {
    calculatearea ( 12, 30 );
    calculatearea(12,34);
    calculatearea(3.0); 
}