// 1) Define a class of employees. It should contain employee 
// number, name, address, and number of dependents for 
// the employee. It should also contain function to insert 
// and display information about employee. Define an array 
// of 20 employees. Now write a simple for loop to read 
// information about the employee. At the end, display all 
// employees with more than two dependents.

#include <iostream>
using namespace std;

class employees{

    public:
        int employee_number;
        string name;
        string address;
        int dependents;
    public:
        void insert_employee()
        {
            cout << "Enter employee number: ";
            cin >> employee_number;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter address: ";
            cin >> address;
            cout << "Enter number of dependents: ";
            cin >> dependents;
        }
        void display_employee()
        {
            cout << "Employee number: " << employee_number << endl;
            cout << "Name: " << name << endl;
            cout << "Address: " << address << endl;
            cout << "Number of dependents: " << dependents << endl;
            cout << "====================="<< endl;
        }
};


int main()
{
    employees emp[2];
    for(int i=0; i<2; i++)
    {
        emp[i].insert_employee();
    }
    // for(int i=0; i<2; i++)
    // {
    //     emp[i].display_employee();
    // }
    for(int i=0; i<2; i++)
    {
        if(emp[i].dependents > 2)
        {
            emp[i].display_employee();
        }
    }
    return 0;
}