#include <iostream>
using namespace std;

struct time{
    int hour, minute, second;
};

int main()
{
	struct time t1, t2, t3;
	//taking the input from user
	cout<<"***Enter first time***"<<endl;
	cout<<"Hours: "; cin>>t1.hour;
	cout<<"Minutes: "; cin>>t1.minute;
	cout<<"Seconds: "; cin>>t1.second;

	//taking the input from user
	cout<<"***Enter second time***"<<endl;
	cout<<"Hours: "; cin>>t2.hour;
	cout<<"Minutes: "; cin>>t2.minute;
	cout<<"Seconds: "; cin>>t2.second;

	//adding the entered times
	t3.second=t1.second+t2.second;
	t3.minute=t1.minute+t2.minute+(t3.second/60);
	t3.hour=t1.hour+t2.hour+(t3.minute/60);
	t3.minute=t3.minute%60;
	t3.second=t3.second%60;

	//displaying total time
	cout<<"Total Time is: "<<t3.hour<<" hours "<<t3.minute<<" minutes "<<t3.second<< " seconds";

	return 0;
}