#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size for the array: ";
    int i;
    cin>>i;
    int a[i];
    cout<<"Entering elements into the array..."<<endl;
    for (int j = 0; j < i; j++){
        cout<<"Enter a num: ";
        cin>>a[j];
    }
    cout<<"\nDisplaying the elements in the array..."<<endl;
    for(int r = 0; r < i; r++){
        cout<<a[r]<<endl;
    }

    return 0;
}