#include <iostream>
using namespace std;

class stu
{
    string name;
    int roll;
    public:
    
    void get_info()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }
};

class student : public stu
{
    int marks[5];
    public:
    
    void get_marks()
    {
        for(int i = 0; i < 5; i++) {
            cout << "Enter marks: ";
            cin >> marks[i];
        }
    }

    void display_marks()
    {
        cout << "Marks: ";
        for(int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};


int main()
{
    student s;
    s.get_info();
    s.get_marks();
    s.display();
    s.display_marks();
    return 0;
}