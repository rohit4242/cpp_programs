// 5. Write a program that reads in 10 numbers and displays 
// their average, and the largest of the numbers (assume 
// that all the inputs are positive integers).

#include <iostream>
using namespace std;

int main()
{
    int i, sum = 0, largest = 0, average;
    for (i = 0; i < 10; i++)
    {
        int number;
        cout << "Enter the number: ";
        cin >> number;
        sum += number;
        if (number > largest)
        {
            largest = number;
        }
    }
    average = sum / 10;
    cout << "The average of the numbers is: " << average << endl;
    cout << "The largest of the numbers is: " << largest << endl;
    return 0;
}