#include<iostream>
using namespace std;
int main(){
    int num = 1;
    int last = 10;
    do{
        if ((num % 2) == 0){
            cout<<num<<endl;
        }
        num++;
    }
    while(num < last);
    return 0;
}