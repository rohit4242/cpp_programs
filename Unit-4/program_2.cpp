// 2) Define Student class having member data rollno, name, m1, 
// m2, m3, per, result member functions getdata(), dispdata(), 
// cal() for inline functions with reference to class.

#include <iostream>
using namespace std;

class student
{
    private:
        int rollno;
        string name;
        int m1;
        int m2;
        int m3;
        float per;
        string result;
        char grade;
    public:
        void getdata()
        {
            cout << "Enter rollno: ";
            cin >> rollno;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter m1: ";
            cin >> m1;
            cout << "Enter m2: ";
            cin >> m2;
            cout << "Enter m3: ";
            cin >> m3;
            cal();
        }
        void dispdata()
        {
            cout << "================="<< endl;
            cout << "Rollno: " << rollno << endl;
            cout << "Name: " << name << endl;
            cout << "M1: " << m1 << endl;
            cout << "M2: " << m2 << endl;
            cout << "M3: " << m3 << endl;
            cout << "Per: " << per << endl;
            cout << "Grade: " << grade << endl;
            cout << "Result: " << result << endl;
        }
        // cal function is inline function
        inline void cal()
        {
            per = ((m1+m2+m3)/3);
            if(per >= 80)
            {
                result = "Pass";
            }
            else
            {
                result = "Fail";
            }
            if(per >= 80)
            {
                grade = 'A';
            }
            else if(per >= 60)
            {
                grade = 'B';
            }
            else if(per >= 40)
            {
                grade = 'C';
            }
            else
            {
                grade = 'D';
            }

        }
};

int main()
{
    student s;
    s.getdata();
    s.dispdata();
    return 0;
}