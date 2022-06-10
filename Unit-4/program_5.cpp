// 7) Write a program to declare protected data in base class. 
// Access data of base class declared under protected section 
// using member functions of derived class.

#include <iostream>
using namespace std;

class program_7
{
    protected:
        int a;
        int b;
    public:
        void getdata()
        {
            cout << "Enter a: ";
            cin >> a;
            cout << "Enter b: ";
            cin >> b;
        }
        void dispdata()
        {
            cout << "================="<< endl;
            cout << "a: " << a << endl;
            cout << "b: " << b << endl;
        }

        void add()
        {
            a = a + b;
        }

        void sub()
        {
            a = a - b;
        }
};

class program_7_1 : public program_7
{
    public:
        void mul()
        {
            a = a * b;
        }

        void div()
        {
            a = a / b;
        }
};

int main()
{
    program_7_1 p;
    p.getdata();
    p.dispdata();
    p.add();
    p.dispdata();
    p.sub();
    p.dispdata();    
    p.mul();
    p.dispdata();
    return 0;
}
