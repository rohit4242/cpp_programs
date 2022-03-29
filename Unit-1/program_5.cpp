// 5. Write a program that reads in 10 numbers and displays 
// their average, and the lowest of the numbers (assume 
// that all the inputs are positive integers).

#include <iostream>
using namespace std;

int main()
{
    int numbers[10], i, lowest=0, sum=0;

    cout << "Enter 10 numbers: ";

    for (i = 0; i < 10; i++)
    {
        cout << "Enter a number: ";
        cin >> numbers[i];
        sum += numbers[i];
        if (numbers[i] < lowest)
        {
            lowest = numbers[i];
        }
    }
    cout << "Average = " << sum / 10 << endl;
    cout << "Lowest = " << lowest << endl;
    return 0;
}