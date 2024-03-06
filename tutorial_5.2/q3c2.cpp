#include<iostream>
using namespace std;
int main(){
    int total = 0;
    int num = 0;
    while(num <= 10){
        num++;
        total = total + num;
    }
    cout<<total<<endl;
    return 0;
}