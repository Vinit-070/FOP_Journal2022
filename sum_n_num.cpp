/*
Author : Vinit Patel.
Write a program using function to add first N numbers.
*/
#include <iostream>
using namespace std;
class N
{
public:
    int num, sum, i;

    void add()
    {
        sum = 0;
        cout << "Enter a Number : ";
        cin >> num;
        if (num > 0)
        {
            for (i = 0; i <= num; i++)
            {
                sum += i;
            }
            cout << "sum = " << sum << endl;
        }
        // else
        // {
        //     cout << "Please Enter a  positive natural number !!!";
        // }
        
    }
};
int main()
{
    N n;
    n.add();
}
