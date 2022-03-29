// 4. WAP in C++ to compute and display the salary of employee. 
// Basic=10,000 
// DA=51% and 
// HRA=15% of basic using the manipulator setw and endl to 
// display the write justify result.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int basic = 10000;
    int da = basic * 51 / 100;
    int hra = basic * 15 / 100;
    cout << "Basic = " << setw(10) << basic << endl;
    cout << "DA = " << setw(10) << da << endl;
    cout << "HRA = " << setw(10) << hra << endl;
    return 0;
}