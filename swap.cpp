/*
Author : Vinit Patel.
Program to swap two numbers using third variable
*/ 
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    cout<<endl;

    c=a;
    a=b;
    b=c;

    cout<<"After Swaping First Number : "<<a<<endl;
    cout<<"After Swaping Second Number : "<<b<<endl;

    return 0;
}