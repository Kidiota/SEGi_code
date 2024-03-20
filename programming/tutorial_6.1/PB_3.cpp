#include<iostream>
using namespace std;
float calculateAverage (float a, float b, float c);

int main(){
    cout<<"Enter three numbers:"<<endl;
    float a, b, c;
    cin>>a>>b>>c;
    float d = calculateAverage(a,b,c);  
    cout<<"The Average is "<<d;

    return 0;
}
float calculateAverage (float a, float b, float c){
    float d = (a + b + c) / 3;
    return d;
}
