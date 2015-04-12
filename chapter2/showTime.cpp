#include <iostream>
using namespace std;

void show(int,int);

int main()
{
	int hour;
	int minute;
	cout<<"Enter the number of hours:"<<endl;
	cin>>hour;
	
	cout<<"Enter the number of minutes:"<<endl;	
	cin>>minute;

	show(hour,minute);
}


void show(int h, int m)
{
	cout<<"Time: "<<h<<":"<<m<<endl;;
}
