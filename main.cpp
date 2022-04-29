#include <iostream>
using namespace std;

class time 
{
    int hour;
    int minute;
    int second;

    public:
    time ()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    void get_time()
    {
        cout << "Enter the hour: "; 
        cin >> hour;
        cout << "Enter the minute: ";
        cin >> minute;
        cout << "Enter the second: ";
        cin >> second;
    }

    void display_time()
    {
        cout << "Your Time is = " <<hour<< ":" <<minute << ":" <<second<<endl;
    }

    void add_time(time t1, time t2)
    {
        hour = t1.hour + t2.hour;
        minute = t1.minute + t2.minute;
        second = t1.second + t2.second;

        if(second >= 60)
        {
            minute++;
            second = second - 60;
        }

        if(minute >= 60)
        {
            hour++;
            minute = minute - 60;
        }

        if(hour >= 24)
        {
            hour = hour - 24;
        }
    }

    time operator +(time t2)
    {
        time ans;
        ans.hour = hour + t2.hour;
        ans.minute = minute + t2.minute;
        ans.second = second + t2.second;

        return ans;
    }

};

int main()
{
    time t1(1,2,3), t2, t3, t4;

    t1.get_time();
    t2.get_time();

    t1.display_time();
    t2.display_time();

    t3.add_time(t1,t2);
    t3.display_time();

    t4 = t1 + t2;
    t4.display_time();

    return 0;
}