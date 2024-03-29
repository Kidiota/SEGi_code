#include<iostream>
using namespace std;

int main(){
    float a[5] = {51.5, 78.3, 90.1, 23.4, 67.2};
    cout<<"Content of the array: ";
    for (int i = 0; i < 5; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Numbers in the array..."<<endl;
    int l = 0;
    int b = 0;
    int m = 0;
    for (int i = 0; i < 5; i++){
        if (a[i] < 50){
            l++;
        }
        else if (a[i] < 70){
            b++;
        }
        else{
            m++;
        }
    }
    cout<<"Less than 50.0: "<<l<<endl;
    cout<<"Between 50.0 and 70.0: "<<b<<endl;
    cout<<"More than 70.0: "<<m<<endl;
    return 0;
}