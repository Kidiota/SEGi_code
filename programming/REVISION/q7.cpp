#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter the day:";
    cin>>day;
    switch (day){
        case 1:
            cout<<"Monday";
        break;
        case 2:
            cout<<"Tuesday";
        break;
        case 3:
            cout<<"Wedneday";
        break;
    }

    return 0;
}