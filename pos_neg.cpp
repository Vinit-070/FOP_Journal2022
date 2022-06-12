/*
Author : Vinit Patel.
Program to check whether the no. is positive or negative.
*/ 
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter any number : ";
    cin>>a;
    if (a>0)
    {
        cout<<a<<" is a positive number"<<endl;
    }
    else if (a<0)
    {
        cout<<a<<" is a negative number"<<endl;
    }
    else
    {
        cout<<a<<" is equal to zero"<<endl;
    }
    return 0;
    
}