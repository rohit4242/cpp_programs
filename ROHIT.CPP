
#include <iostream.h>
#include <conio.h>

class time
{
    int hour, minute, second;
    public:
    time()
    {
	hour = minute = second = 0;
    }
    time(int h, int m, int s)
    {
	hour = h;
	minute = m;
	second = s;
    }
    void display()
    {
	cout << hour << ":" << minute << ":" << second << endl;
    }
    friend  time operator + (time t1,time t2);

};

    time operator + (time t1, time t2)
    {
	time t3;
	t3.second = t1.second + t2.second;
	t3.minute = t1.minute + t2.minute;
	t3.hour=t1.hour+t2.hour;
	if(t3.second>=60)
	{
		t3.minute +=t3.second/60;
		t3.second%=60;
	}
	if(t3.minute >=60)
	{
	 t3.hour +=t3.minute/60;
	 t3.minute %=60;
	 }
	 return t3;
    }

int main()
{
    clrscr();

    time t1(1, 2, 3), t2(4, 5, 6);

    time t3 = t1 + t2;
    t3.display();
    getch();
    return 0;
}