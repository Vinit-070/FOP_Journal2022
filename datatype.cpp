/* 
Author : Vinit Patel.
Program to print variable with their datatypes & display value
*/ 
#include<iostream>
using namespace std;
int main()
{
    int a;
    string b;
    char c;
    double d;
    float e;
    cout<<"Enter any integer : ";
    cin>>a;
    cout<<"Enter any String : ";
    cin>>b;
    cout<<"Enter any Character : ";
    cin>>c;
    cout<<"Enter any Double : ";
    cin>>d;
    cout<<"Enter any Float : ";
    cin>>e;

    cout<<endl;

    cout<<"Integer = "<<a<<endl;
    cout<<"String = "<<b<<endl;
    cout<<"Character = "<<c<<endl;
    cout<<"Double = "<<d<<endl;
    cout<<"Float = "<<e<<endl;

    return 0;
}