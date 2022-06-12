/*
Author : Vinit Patel.
Program to print the following pattern

            1
            35
            7911

*/ 
#include<iostream>
using namespace std;
int main()
{
    int a, i, j, k=1;
    cout<<"Enter number of rows : ";
    cin>>a;

    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<2*k-1;
            k++;
        }
        cout<<endl;
    }
    return 0;
}