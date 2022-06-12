/*
Author : Vinit Patel.
Define a class Bank which contains following:
 Data Members:
− Name of account holder
− Account Number
− Balance in the account.
Member Functions:
- To deposite amount
- To withdraw amount after checking for balance.
− To display the details of account.
Write  program to create account for one customer.
*/
#include<iostream>
using namespace std;
class bank
{
    public: 
    int acc_num;
    char name[10];
    double bal;
 
    void get()
    {
        cout<<"Enter Name";
        cin>>name;

       cout<<"Enter Account No";
        cin>>acc_num;
  
        cout<<"Enter Balance";
        cin>>bal;
    }
   
   void deposite()
    {
        int amt;
        cout<<"Enter amount you want to deposite";
        cin>>amt;
        bal = bal + amt;               
    }

    void withdraw()
    {
        int amt;
        cout<<"Enter amount you want to withdraw";
        cin>>amt;
        
        bal = bal - amt;
        
    }

    void display()
    {
        cout<<"Name of the Account Holdder is: "<<name<<endl;
        cout<<"The Account Number is: "<<acc_num<<endl;
        cout<<"Balance of the Account is: "<<bal<<endl;
    }
};

int main()
{
        bank b;

        b.get();
        b.deposite();
        b.display();
        b.deposite();
        b.display();
        b.withdraw();
        b.display();   
}