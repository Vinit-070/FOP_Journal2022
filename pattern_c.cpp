/*
Author : Vinit Patel.
Program to print the following pattern 

           AAAA
           BBB
           CC
           D

*/ 
#include<iostream>
using namespace std;
int main()
{
    int a,i,j,k=65;
    cout<<"Enter number of rows : ";
    cin>>a;

    for(i=a;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            cout<<((char)k); 
        }
        k++;
        cout<<endl;
    }
    return 0;
}