#include<iostream>
using namespace std;
int main(){
    int bil = 0;
    int total = 0;
    int mark;
    string status;
    while (bil<30)
    {
        cout<<"Please enter your mark ("<<bil + 1<<"/30):";
        cin>>mark;
        total = total + mark;
        bil = bil + 1;
    }
    int avg = total / 30;
    status = "Fail";
    if (avg > 40){
        status = "Pass";
    }
    if (avg > 55){
        status = "Good";
    }
    if (avg > 85){
        status = "Excellent";
    }
    cout<<"Your status is "<<status<<endl;

    return 0;
}