/* 
Author : Vinit Patel.
Program to Design basic calculator
*/ 
#include<iostream>
using namespace std;
int main()
{
    float a,b,add,sub,mul,div;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;

    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;

    cout<<"Addition of "<<a<<" and "<<b<<" = "<<add<<endl;
    cout<<"Subtraction of "<<a<<" and "<<b<<" = "<<sub<<endl;
    cout<<"Multiplication of "<<a<<" and "<<b<<" = "<<mul<<endl;
    cout<<"Division of "<<a<<" and "<<b<<" = "<<div<<endl;

    return 0;

}