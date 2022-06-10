// 4) Implement single, multiple, multilevel, hierarchical and 
// hybrid inheritance using specific example. 

#include <iostream>
using namespace std;

class A {
    public:
        void A1() {
            cout << "A1" << endl;
        }
};

class B : public A {
    public:
        void B1() {
            cout << "B1" << endl;
        }
};

class C : public B {
    public:
        void C1() {
            cout << "C1" << endl;
        }
};

int main() {
    C c;
    c.A1();
    c.B1();
    c.C1();

    return 0;
}

