// 2) Define Student class having member data rollno, name, m1, 
// m2, m3, per, result member functions getdata(), dispdata(), 
// cal() for inline functions with reference to class.

#include <iostream>
using namespace std;

class student
{
    int rollno;
    string name;
    int m1, m2, m3;
    float per;
    char result;
    public:
    void getdata()
    {
        cout << "Enter rollno: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
        per = (m1 + m2 + m3)/3;
        if(per >= 90)
            result = 'A';
        else if(per >= 80)
            result = 'B';
        else if(per >= 70)
            result = 'C';
        else if(per >= 60)
            result = 'D';
        else
            result = 'F';
    }
    void dispdata()
    {
        cout << "Rollno: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks of 3 subjects: " << m1 << " " << m2 << " " << m3 << endl;
        cout << "Percentage: " << per << endl;
        cout << "Result: " << result << endl;
    }
    void cal()
    {
        if(per >= 90)
            result = 'A';
        else if(per >= 80)
            result = 'B';
        else if(per >= 70)
            result = 'C';
        else if(per >= 60)
            result = 'D';
        else
            result = 'F';
    }
};
