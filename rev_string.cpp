/*
Author : Vinit Patel.
Program to reverse user entered string without using 'strrev()'. 
*/ 
#include <iostream>
using namespace std;

int main()
{

    char str[10];
    char reverse[50];
    int i=-1, j=0;

    cout<<"Enter String : ";
    cin>>str;

        while(str[++i]!='\0');

           while(i>=0)
                    reverse[j++]=str[--i];
 
            reverse[j]='\0';

      cout<<"Reverse of a string is : "<<reverse;
      
      return 0;

}