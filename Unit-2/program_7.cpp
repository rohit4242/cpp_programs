// 7. Define a class employee with the following data members as 
// private: Empno, ename, basic, hra, da, salary and a private 
// member function Called, float calculate(void) - to calculate 
// net salary. 
// Public member functions as bellow : Void getinfo(void) – A 
// function to accept values for empno, name, basic, hra, da and 
// invoke calculate( ) function to calculate net salary. Void 
// displayinfo(void) – A function to display all the data members 
// on the screen. Write an appropriate main( ) function for it.

#include <iostream>
using namespace std;


class employee
{
    private:
        int empno;
        string ename;
        int basic;
        int hra;
        int da;
        float salary;
        float calculate()
        {
            return (basic+hra+da);
        }
    public:
        void getinfo()
        {
            cout << "Enter empno: ";
            cin >> empno;
            cout << "Enter ename: ";
            cin >> ename;
            cout << "Enter basic: ";
            cin >> basic;
            cout << "Enter hra: ";
            cin >> hra;
            cout << "Enter da: ";
            cin >> da;
            salary = calculate();
        }
        void displayinfo()
        {
            cout << "================="<< endl;
            cout << "Empno: " << empno << endl;
            cout << "Ename: " << ename << endl;
            cout << "Basic: " << basic << endl;
            cout << "Hra: " << hra << endl;
            cout << "Da: " << da << endl;
            cout << "Salary: " << salary << endl;
        }
};

int main()
{
    employee e;
    e.getinfo();
    e.displayinfo();
    return 0;
}