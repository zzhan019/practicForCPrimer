#include <iostream>

int main()
{
	using namespace std;
	int year = 2015;
	double money = 12141;

	cout<<"the value of year is: "<<year<<endl;
	cout<<"the address of year is: "<<&year<<endl;
       
        cout<<"the value of money is: "<<money<<endl;
        cout<<"the address of money is: "<<&money<<endl;

	cout<<"size of year is: "<<sizeof(year)<<endl;
}
