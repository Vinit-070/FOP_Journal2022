/*
Author : Vinit Patel.
Program to find factorial of a given number
*/ 
#include<iostream>
using namespace std;
int main()
{
    int n,i,fact=1;
    cout<<"Enter a number : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact;
    return 0;
}