#include<iostream>
using namespace std;
int findMaximum (int a, int b);
int main(){
    cout<<"Enter two numbers:"<<endl;
    int a, b;
    cin>>a>>b;
    int c = findMaximum(a,b);
    cout<<c;

    return 0;
}
int findMaximum (int a, int b){
    int c;
    if (a >= b)
        c = a;
    else
        c = b;
    return c;
}