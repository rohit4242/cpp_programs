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
        int marks[3];
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
            cin >> marks[0];
            cout << "Enter m2: ";
            cin >> marks[1];
            cout << "Enter m3: ";
            cin >> marks[2];
            cal();
        }
        void dispdata()
        {
            cout << "================="<< endl;
            cout << "Rollno: " << rollno << endl;
            cout << "Name: " << name << endl;
            cout << "M1: " << marks[0] << endl;
            cout << "M2: " << marks[1] << endl;
            cout << "M3: " << marks[2] << endl;
            cout << "Per: " << per << endl;
            cout << "Grade: " << grade << endl;
            cout << "Result: " << result << endl;
        }

        inline void cal()
        {
            per = ((marks[0]+marks[1]+marks[2])/3);
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