
#include <iostream>
#include <fstream>
using namespace std;

class Student 
{
    private:
        int id;
        string name;
        int age;

        public:

        void getdata()
        {
            cout << "Enter the id: ";
            cin >> id;
            cout << "Enter the name: ";
            cin >> name;
            cout << "Enter the age: ";
            cin >> age;
        }

        void putdata()
        {        
            cout << "The id is: " << id << endl;
            cout << "The name is: " << name << endl;
            cout << "The age is: " << age << endl;
        }
};

int main()
{
    Student s;
    fstream file;
    int choice;

    file.open("student.dat", ios::app | ios::in | ios::out | ios::binary);

    do
    {
        cout << "1. Enter the data" << endl;
        cout << "2. Display the data" << endl;
        cout << "3. Check the current positions of record" << endl;
        cout << "4. find the data" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter the data" << endl;
                s.getdata();
                file.write((char*)&s, sizeof(s));
                break;
            case 2:
                cout << "Display the data" << endl;
                file.seekg(0, ios::beg);
                while(file.read((char*)&s, sizeof(s)))
                {
                    s.putdata();
                }
                break;
            case 3:
                int position = file.tellg();
                cout << "The current position is: " << position << endl;
                break;
            case 4:
                int position = file.tellg();
                cout << "The current position is: " << position << endl;
                int n = (position / sizeof(s));

                cout << "The current record is: " << n << endl;
                break;

            default:
                cout << "Invalid choice" << endl;

        }
    }while(choice != 3);

    file.close();
}