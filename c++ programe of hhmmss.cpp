#include<iostream>
using namespace std;

int main()
{
		int seconds,minutes,hours;
		cout<<"please enter seconds"<<end1;
		cin>>seconds;
		minutes=seconds/60;
		seconds=seconds%60;
		hours=minutes/60;
		minutes=minutes%60;
		
	cout<<hours<<"hours"<<minutes<<"mintues"<<seconds<<"seconds"<<end1;
	return 0;		
}

