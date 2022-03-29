// 5. Write a program that prompts the user to enter 5 exam 
// marks (design your program such that it would be easy to 
// change if we wanted it to work for more than 5 exams). The 
// program then displays the average mark, the highest mark, 
// and number of marks entered less than the average mark. 
// For example, when executing the program and inputting 20, 
// 30, 10, 40, and 50 the running session will look as follows: 
// Enter a mark: 20

#include <iostream>
using namespace std;

int main()
{
    int marks[5], i, average=0, highest=0, count=0, lowest=0, sum=0;

    cout << "Enter 5 marks: ";

    for (i = 0; i < 5; i++)
    {
        cout << "Enter a mark: ";
        cin >> marks[i];
        sum += marks[i];
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }
    average = sum / 5;
    for (i = 0; i < 5; i++)
    {
        if (marks[i] < average)
        {
            count++;
        }
    }
    cout << "Average = " << average << endl;
    cout << "Highest = " << highest << endl;
    cout << "Lowest = " << lowest << endl;
    cout << "Count = " << count << endl;
    return 0;
}