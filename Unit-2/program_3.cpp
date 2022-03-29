// 3. Demonstrate the use of static variables in a class by 
// using it to count the number of objects created in the 
// program

#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    static int count = 0;
    count++;
    cout << "count = " << count << endl;
    cout << "count = " << count << endl;

    return 0;
}







