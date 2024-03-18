#include<iostream>
using namespace std;
int add (int n1, int n2){
    int sum;
    sum = n1 + n2;
    return sum;
}
int main(){
    int num1, num2;
    cout<<"Enter 2 number";
    cin>>num1>>num2;
    cout<<num1<<num2<<add(num1,num2);
    return 0;
}

