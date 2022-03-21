// 1. Write a program that computes and displays the area of 
// a triangle, after the user has entered its height and base.

#include <iostream>
using namespace std;

int main()
{
    int height, base, area;

    cout << "Enter the height of the triangle:"<<endl;
    cin >> height;
    cout << "Enter the base of the triangle:"<<endl;
    cin >> base;

    area = (height * base)/2;

    cout << "The area of the triangle is: " << area << endl;

    return 0;
}