// 2. Illustrate the concept of dynamic variable in C++. 

#include <iostream>
using namespace std;

int main()
{
    // Illustrate the concept of dynamic variable in C++.
    int *ptr;
    int number;
    cout << "Enter the number: ";
    cin >> number;
    ptr = &number;
    cout << "The number is: " << *ptr << endl;
    return 0;
}