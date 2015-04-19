#include <iostream>
using namespace std;

int main()
{
	char firstname[20];
	char lastname[20];
	int age;
	//enum grade{A,B,C,D,E,F};
	//grade mygrade;
	char tmpchar;
	
	cout<<"What is your first name? ";
	cin.getline(firstname,20);
	cout<<firstname<<endl;
	cout<<"What is your last name? ";
	cin.getline(lastname,20);
	cout<<lastname<<endl;
	cout<<"What is your age? ";
	cin>>age;
	cout<<age<<endl;
	cout<<"What letter grade do your deserve? ";
	cin>>tmpchar;
	//mygrade = (grade)tmpchar;
	cout<<char(tmpchar+1)<<endl;
	
}


