#include <iostream>
using namespace std;

class parent_1
{
    public:
    
    void display_1()
    {
        cout << "parent class 1" << endl;
    }
};

class parent_2 
{
    public:
    
    void display_2()
    {
        cout << "parent class 2" << endl;
    }   
};

class child : public parent_1 ,public parent_2
{
    public:
    
    void display()
    {
        cout << "child class" << endl;
    }
};

int main()
{
    child c;
    c.display_1();
    c.display_2();
    c.display();
    return 0;
}