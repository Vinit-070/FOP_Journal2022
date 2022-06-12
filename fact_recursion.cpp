/*
    Author : Vinit Patel.
    Write a program to find factorial of a given number using recursion function.
*/
#include <iostream>

using namespace std;
int fact(int n)
{
    if (n >= 1)
        return n * fact(n - 1);
    else
        return 1;
}
int main()
{
    int n, fa;
    cout << "Enter any number : ";
    cin >> n;
    fa = fact(n);
    cout << "Factorial of " << n << " is " << fa;
    return 0;
}