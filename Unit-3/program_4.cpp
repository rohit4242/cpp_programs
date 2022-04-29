// 4) Overload subscript operator [] for a array class.

#include <iostream>
using namespace std;

class sub {
    int arr[10];
    public:
    sub() {
        for(int i = 0; i < 10; i++) {
            arr[i] = 0;
        }
    }
    int& operator[](int index) {
        return arr[index];
    }
};

int main()
{
    sub s;
    s[0] = 10;
    s[1] = 20;
    s[2] = 30;
    s[3] = 40;
    s[4] = 50;
    s[5] = 60;
    s[6] = 70;
    s[7] = 80;
    s[8] = 90;
    s[9] = 100;
    for(int i = 0; i < 10; i++) {
        cout << s[i] << " ";
    }
    cout << endl;
    return 0;
}