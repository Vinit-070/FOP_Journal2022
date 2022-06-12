/*
Author : Vinit Patel.
Program to print the following pattern

            *
            ***
            *****

*/ 
#include<iostream>
using namespace std;
int main()
{
    int a, i, j;
    cout<<"Enter number of rows : ";
    cin>>a;

    for(i=1;i<=a;i++)
    {
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}