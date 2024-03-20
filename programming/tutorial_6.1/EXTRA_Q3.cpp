#include <iostream>
using namespace std;

void getValue (int& a, int& b, int& c);

void add10 (int& a, int& b, int& c);

int multiply (int& a, int& b, int& c);

int main(){
    int a, b, c;
    getValue(a,b,c);
    add10(a,b,c);
    cout<<endl<<"Multiplication of original values: "<<multiply(a,b,c);

    return 0;
}

void getValue (int& a, int& b, int& c){
    cout<<"Enter three integers..."<<endl;
    cin>>a>>b>>c;
}

void add10 (int& a, int& b, int& c){
    cout<<endl<<"After addition of 10:-"<<endl;
    cout<<"a: "<<a+10<<endl;
    cout<<"b: "<<b+10<<endl;
    cout<<"c: "<<c+10<<endl;

}

int multiply (int& a, int& b, int& c){
    return a*b*c;
}