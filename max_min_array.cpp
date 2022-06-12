/*
Author : Vinit Patel.
Program to find maximum and minimum from 1-D array.
*/ 
#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,max,min;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elements of array : ";

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }   
         max = a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    cout<<"Maximum = "<<max<<endl;
    cout<<"Minimum = "<<min<<endl;
    return 0;
}