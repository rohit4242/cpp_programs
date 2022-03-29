// 1. Illustrate the use of reference variable through the C++ 
// program.

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    b = 20;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}