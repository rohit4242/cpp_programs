// 2. Write a program that inputs an integer number and 
// displays its absolute value (i.e., if the input value is 
// negative then the value would be displayed as positive and 
// if the input value is positive or 0 then the output should 
// coincide with the input. For example, if the input is –3 the 
// output value will be 3).

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    if (number < 0)
    {
        number = -number;
    }
    cout << "The absolute value of the number is: " << number << endl;
    return 0;
}