#include<iostream>
using namespace std;
int main(){
    cout<<"Do you want to run the program?(Y or N):"<<endl;
    char i;
    cin>>i;
    while(i == 'y' || i == 'Y'){
        int a, b;
        cout<<"Enter the first number:";
        cin>>a;
        cout<<"Enter the second number:";
        cin>>b;
        cout<<"The results is "<<a * b<<endl;
        cout<<"Do you want to run the program again?(Y or N):"<<endl;
        cin>>i;
    }
    return 0;
}