#include<iostream>
using namespace std;

int main(){
    cout<<"Entering elements into the array..."<<endl;
    int a[6];
    for (int i = 0; i < 6; i++){
        cout<<"Enter a num: ";
        cin>>a[i];
    }
    cout<<"\n Elements from first to last:"<<endl;
    for(int r = 0; r < 6; r++){
        cout<<a[r]<<" ";
    }
    cout<<"\n Elements from last to first:"<<endl;
    for(int e = 5; e >= 0; e--){
        cout<<a[e]<<" ";
    }

    return 0;
}