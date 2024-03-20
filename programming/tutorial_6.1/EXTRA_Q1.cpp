#include<iostream>
using namespace std;
int sum (int a, int b);
int difference (int a, int b);
int product (int a, int b);

int main(){
    int a, b;
    cout<<"Please enter the first integer: ";
    cin>>a;
    cout<<"Please enter the second integer:";
    cin>>b;
    cout<<"~Result of calculation~"<<endl;
    cout<<"The sum is: "<<sum(a,b)<<endl;
    cout<<"The difference is: "<<difference(a,b)<<endl;
    cout<<"The product is: "<<product(a,b)<<endl;

    return 0;
}

int sum (int a, int b){
    return a + b;
}

int difference (int a, int b){
    int c;
    if (a > b){
        c = a - b;
    }
    else if (b > a){
        c = b - a;
    }
    else{
        c = 0;
    }
    return c;
}

int product (int a, int b){
    return a * b;
}