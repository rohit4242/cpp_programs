// 3. Write a menu driven program that can perform the 
// following functions on strings. (Use overloaded 
// operators where possible). (Do not use predefined string 
// class ) 
// 1. Compare two strings for equality (== operator) 
// 2. Check whether first string is smaller than the second 
// (<= operator) 
// 3. Copy the string to another 
// 4. Extract a character from the string (Overload []) 
// 5. Reverse the string 
// 6. Concatenate two strings (+operator)

#include <iostream>
using namespace std;

class str {

    public:
        string name;

    int getstr()
    {
        cout << "Enter a string: ";
        cin >> name;
        cout << "=========================" << endl;
        return 0;
    }

    int display()
    {
        cout << "String: " << name << endl;
        return 0;
    }

    int operator ==(str s1)
    {
        return (name == s1.name);
    }

    int operator <=(str s1)
    {
        return (name <= s1.name);
    }

    int operator +(str s1)
    {
        name = name + s1.name;
        return 0;
    }

    char operator [](int i)
    {
        return name[i];
    }

};

int main()
{
    str s1,s2;
    int choice;

    do
    {
        cout << "=========================" << endl;
        cout << "1. Compare two strings" << endl;
        cout << "2. Check whether first string is smaller than the second" << endl;
        cout << "3. Copy the string to another" << endl;
        cout << "4. Extract a character from the string" << endl;
        cout << "5. Reverse the string" << endl;
        cout << "6. Concatenate two strings" << endl;
        cout << "7. Exit" << endl;
        cout << "=========================" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        cout << "=========================" << endl;

        switch (choice)
        {
        case 1:
            s1.getstr();
            s2.getstr();

            if(s1.name == s2.name)
            {
                cout << "Strings are equal" << endl;
            }
            else
            {
                cout << "Strings are not equal" << endl;
            }
            break;
        
        case 2:
            s1.getstr();
            s2.getstr();

            if(s1.name <= s2.name)
            {
                cout << "First string is smaller than the second" << endl;
            }
            else
            {
                cout << "First string is not smaller than the second" << endl;
            }
            break;
        
        case 3:
            s1.getstr();
            s2.name = s1.name;
            s2.display();
            break;
        case 4:
            s1.getstr();
            cout << "Enter the index: ";
            int i;
            cin >> i;
            cout << "Character at index " << i << ": " << s1[i-1] << endl;
            break;

        case 5:
            s1.getstr();
            for(int i=s1.name.length()-1; i>=0; i--)
            {
                cout << s1.name[i];
            }
            cout << endl;
            break;

        case 6:
            s1.getstr();
            s2.getstr();
            s1.name = s1.name + s2.name;
            s1.display();
            break;

        case 7:
            break;
                    
        default:
            cout << "Invalid choice" << endl;
            break;
        }


    } while (choice!=7);
    
}