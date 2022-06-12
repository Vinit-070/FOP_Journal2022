/*
Author : Vinit Patel.
Program to find largest among three numbers
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
    cout<<"Enter Third Number : ";
    cin>>c;

    if(a>=b)
    {
        if(a>=c)
        {
            cout<<a<<" is largest.";
        }
        else
        {
            cout<<c<<" is largest.";
        }
    }
    else
    {
        if(b>=c)
        {
            cout<<b<<" is largest.";
        }
        else
        {
            cout<<c<<" is largest.";
        }
    }
    return 0;
}