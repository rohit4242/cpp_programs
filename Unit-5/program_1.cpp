#include <iostream>
#include <fstream>
using namespace std;


class student {

    public:
        char name[32]; 
        char id[15];

        void add_record()
        {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter id: ";
            cin >> id;

        }

        void display_record()
        {
            cout << "Name: " << name << endl;
            cout << "Id: " << id << endl;
        }
        void search_by_name();
        void search_by_id();
    };

    void student::search_by_name()
    {
        char sname[32];
        student obj;
        ifstream file ("Text_File.txt");

            cout << "Enter name to find: ";
            cin >> sname;

        if (file.is_open()) 
        {

            if (!file.eof()) 
            {

                if(name == sname) 
                {
                    file.read((char*)& sname,sizeof(sname));
                    cout << "\n Student Name:\t" << name;
                    cout << "\n Student ID:\t" << id;
                }
                
                else 
                {
                    cout << "Student not found.";
                }
            } 
            else 
            {
                cout << "Unable to open file.";
            } 
        }
    };


    void student::search_by_id(){
        char id[15];
        student obj;
        ifstream file ("Text_File.txt");

        cout << "Enter ID number: ";
        cin >> id;

        if (file.is_open())
            if (file >> id) {
                cout << "\n Student Name:\t" << obj.name;
                cout << "\n Student ID:\t" << obj.id;
            }

            else {
                cout << "Name not found";
            }
        else {
            cout << "Unable to open file.";
        }
    }

    int main () {
        student obj;
        int choice;

        cout << "\n Choose search method: ";
        cout << "\n 1.add record";
        cout << "\n 2.display record";
        cout << "\n 3. Find by name.";
        cout << "\n 4. Find by ID";
        cout << "\n\n Enter your choice: ";
        cin >> choice;    

        switch (choice) 
        {
            case 1:
                obj.add_record();
                break;
            case 2:
                obj.display_record();
                break;
            case 3:
                obj.search_by_name();
                break;
            case 4:
                obj.search_by_id();
                break;
            default:
                cout << "Invalid choice! Please enter 1 or 2 as your choice.";
                break;
        }           
    }