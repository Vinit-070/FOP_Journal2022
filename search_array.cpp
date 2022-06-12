/*
Author : Vinit Patel.
Program to search an element from 1-D array.
 => Here 'Flag' concept is also used.
*/ 
#include<iostream>
using namespace std;
int main()
{
    int a[10], n, e, i, f=0;
    cout<<"Enter size of element : ";
    cin>>n;
    cout<<"Enter elements of array : ";
    for (i=0;i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Please enter the element you want to find : ";
    cin>>e;

    for(i=0;i<n;i++)
    {
        if(e==a[i])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"Element found at "<<(i+1)<<" position of array"<<endl;
    }
    else
    {
        cout<<"Element not found !!!! "<<endl;
    }
    return 0;
}