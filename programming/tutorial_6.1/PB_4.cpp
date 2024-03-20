#include<iostream>
using namespace std;
float calculateRectangleArea (float a, float b);

int main(){
    float l, w;
    cout<<"Enter the Length and width:"<<endl;
    cin>>l>>w;
    cout<<"The area of rectangle is "<<calculateRectangleArea(l,w);

    return 0;
}

float calculateRectangleArea (float a, float b){
    int c = a * b;
    return c;
}