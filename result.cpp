/*
Author : Vinit Patel.
Program For Exam Result Analysis System
*/ 
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter your marks : ";
    cin>>a;
    if (a==12)
    {
        cout<<"Congrulations !! You are passed with D grades."<<endl;
    }
    else if (a>=13 && a<=20)
    {
        cout<<"Congrulations !! You are passed with C grades."<<endl;
    }
    else if (a>=21 && a<=25)
    {
        cout<<"Congrulations !! You are passed with B grades."<<endl;
    }
    else if (a>=26 && a<=30)
    {
        cout<<"Congrulations !! You are passed with A grades."<<endl;
    }
    else if(a>=0 && a<12)
    {
        cout<<"Alert !!! You are failed and you have to give make up test to clear the subject."<<endl;
    }
    else
    {
        cout<<"Please Enter Your Correct Marks !"<<endl;
    }
    return 0;
}