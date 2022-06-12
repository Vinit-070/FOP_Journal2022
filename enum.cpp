/*
Author : Vinit Patel.
Write a program that demonstrates the use of enum data type.
*/
#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
enum seasons { spring = 34, summer = 4, autumn = 9, winter = 32};

int main()
{
    week today;
    today = Wednesday;
    cout << "Day " << today+1<<endl;
    
    
    seasons s;

    s = summer;
    cout << "Summer = " << s << endl;
    return 0;
}