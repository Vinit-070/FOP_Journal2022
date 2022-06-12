/*
Author : Vinit Patel.
Program to design basic calculator using switch case.
*/ 
#include<iostream>
using namespace std;
int main()
{
    char op;
    float a,b;

    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    cout<<"Enter Operator: +, -, *, / : ";
    cin>>op;

    switch (op)
    {
        case '+' :
        cout<<a<<"+"<<b<<" = "<<a+b<<endl;
        break;
        case '-' :
        cout<<a<<"-"<<b<<" = "<<a-b<<endl;
        break;
        case '*' :
        cout<<a<<"*"<<b<<" = "<<a*b<<endl;
        break;
        case '/' :
        cout<<a<<"/"<<b<<" = "<<a/b<<endl;
        break;
    
    default:
        cout<<"Error !!! Operator is not correctly entered.";
        break;
    }
    return 0;
}