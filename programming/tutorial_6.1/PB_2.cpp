#include<iostream>
using namespace std;
int findMaximum (int a, int b);
int findMinimum (int a, int b);

int main(){
    cout<<"Enter two numbers:"<<endl;
    int a, b;
    cin>>a>>b;
    int c = findMaximum(a,b);
    int d = findMinimum(a,b);  
    cout<<"The "<<c<<" is bigger then "<<d;

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
int findMinimum (int a, int b){
    int c;
    if (a >= b)
        c = b;
    else
        c = a;
    return c;
}
