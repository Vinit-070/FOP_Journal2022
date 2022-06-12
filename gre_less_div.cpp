/*
Author : Vinit Patel.
Program to find sum of all integers greater than 100 & less than 200 & are divisible by 5.
*/ 
#include<iostream>
using namespace std;
int main()
{
    int i, a=0, b=0;
    for(i=101; i<200; i++)
    {
        if (i%5==0)
        {
            a = a+i;
            b++;
        }
        
    }
    cout<<"Sum of numbers between 100 to 200 divisible by 5 = "<<a<<endl;
    cout<<"Total numbers divisible by 5 between 100 to 200 = "<<b<<endl;
    return 0;
}