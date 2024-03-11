#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year:";
    cin>>year;
    switch (year)
    {
    case 1: case 2:
        cout<<"Junior";
        break;
    case 3: case 4:
        cout<<"Senior";
        break;    
    default:
        cout<<"Invalid year of studies.";
        break;
    }
    return 0;
}