#include<iostream>
using namespace std;

string evenOrodd (int a);

int main(){
    for (int i; i <= 2; i++){
        int a;
        cout<<"Enter an integer: ";
        cin>>a;
        cout<<"The number is "<<evenOrodd(a)<<endl<<endl;
    }

    return 0;
}

string evenOrodd (int a){
    string r;
    a = a % 2;
    if (a == 0){
        r = "even";
    }
    else{
        r = "odd";
    }
    return r;
}