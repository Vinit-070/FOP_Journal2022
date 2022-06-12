/*
Author : Vinit Patel.
Program to sort an integer array in ascending order. 
*/ 
#include<iostream>
using namespace std;
int main()
{
    int a[5], i, n, j, temp;
    cout<<"Enter Size : ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"Enter number : ";
        cin>>a[i];
    }
    cout<<"Ascending order : ";
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        cout<<a[i];
    }
    return 0;
}