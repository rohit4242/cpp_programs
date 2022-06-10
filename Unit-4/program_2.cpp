// 3) Illustrate the use of this pointer

#include <iostream>
using namespace std;

class MyClass {
    
    private:
        int x;
    public:

        MyClass(int x) {
            this->x = x;
        }

        void setX(int x) {
            this->x = x;
        }

        void printX() {
            cout << "x = " << x << endl;
        }
};

int main()
{  
    MyClass *myClass = new MyClass(500);
    myClass->printX();
    myClass->setX(1000);
    myClass->printX();
    delete myClass;
    return 0;
}