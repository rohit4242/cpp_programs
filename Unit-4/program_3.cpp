// 6) Base Class Name →Counter ; data member → count ; 
// member functions → default constructor to set count to 
// 0, inc() Derived Class Name →Countdown; data member 
// → none; member functions → dec() Note : inc() & dec() 
// must return the count values

#include <iostream>
using namespace std;

class Counter
{
    public:
        int count;

        Counter()
        {
            count = 0;
        }
        void inc()
        {
            ++count;
        }
};

class Countdown : public Counter
{
    public:
        void dec()
        {
            --count;
        }
};

int main(){
    Countdown c;
    c.inc();
    cout << c.count << endl;
    
    c.inc();
    cout << c.count << endl;

    c.inc();
    cout << c.count << endl;

    c.dec();
    cout << c.count << endl;

    c.inc();
    cout << c.count << endl;
    return 0;
}
