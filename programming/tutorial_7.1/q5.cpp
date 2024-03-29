#include<iostream>
using namespace std;
int main(){
    char v[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char u;
    cout<<"Enter a character: ";
    cin>>u;
    bool a = 0;
    for (int i = 0; i < 10; i++){
        if (v[i] == u){
            a = 1;
        }
    }
    if (a == 1){
        cout<<"\nThe character is a vowel!";
    }
    else{
        cout<<"\nThe character is NOT a vowel!";
    }
    return 0;
}