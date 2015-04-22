#include <iostream>
using namespace std;
struct travelTime
{
	int hours;
	int minutes;
};
const int minPerHour = 60;
travelTime sum(travelTime,travelTime);
void show(travelTime);

int main()
{
	using namespace std;
	travelTime day1 = {5, 45};
	travelTime day2 = {4, 55};

	travelTime total =  sum(day1, day2);
	cout<<"Two day total time: ";
	show(total);

	travelTime day3 = {4, 32};

	cout<<"Three day total time: ";
	show(sum(total,day3));
}

travelTime sum(travelTime t1,travelTime t2)
{
	travelTime total;
	
	total.hours = t1.hours + t2.hours +(t1.minutes + t2.minutes)/minPerHour;
	total.minutes = (t1.minutes + t2.minutes)% minPerHour;
	
	return total;	
}
void show(travelTime t)
{
	cout<<t.hours<<" hours, "
	    <<t.minutes<<" minutes.\n";
}
