#include<iostream>
using namespace std;
int main(){
    int total = 0;
    int num = 0;
    do {
        total = total + num;
        num++;
    }
    while (num <= 10);
    cout<<total<<endl;
    return 0;
}