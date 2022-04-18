// 2) Define a class to represent a bank account. Include the 
// following members : 
// Data Members Member Functions 
// Name of Depositor To assign initial values 
// Account Number To deposit the amount 
// Type of Account To withdraw an amount after checking 
// the balance amount in account 
// To display name and balance 
// Write C++ program to handle 10 customers.

#include <iostream>
using namespace std;

int main()
{
    int account_number[10];
    double balance[10];
    string name[10];
    string type[10];
    for(int i=0; i<10; i++)
    {
        cout << "Enter name: ";
        cin >> name[i];
        cout << "Enter account number: ";
        cin >> account_number[i];
        cout << "Enter initial balance: ";
        cin >> balance[i];
        cout << "Enter type of account: ";
        cin >> type[i];
        cout << "====================="<< endl;
    }
    for(int i=0; i<10; i++)
    {
        if(type[i] == "savings")
        {
            balance[i] = balance[i] + balance[i] * 0.05;
        }
        else if(type[i] == "current")
        {
            balance[i] = balance[i] + balance[i] * 0.1;
        }
    }
    for(int i=0; i<10; i++)
    {
        cout << "Name: " << name[i] << endl;
        cout << "Account number: " << account_number[i] << endl;
        cout << "Balance: " << balance[i] << endl;
        cout << "====================="<< endl;
    }
    return 0;
}