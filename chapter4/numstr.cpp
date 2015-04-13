#include <iostream>
using namespace std;

int main()
{
	int year;
	char address[30];
	cout<<"which year was your house build?\n";
	cin>>year;
	cin.get(); //read enter
	
	cout<<"what is your address?\n";
	
	cin.getline(address,30);
	
	cout<<"Year build: "<<year<<endl;

	cout<<"Address: "<<address<<endl;
	
}
