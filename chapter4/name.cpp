#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	char first[20];
	char last[20];
	//char name[30];

	cout<<"Enter your first name: "<<endl;
	cin.getline(first,20);
	cout<<"Enter your last name: "<<endl;
	cin.getline(last,20);
	
	string name =strcat(strcat(last, ", "),first);
	cout<<"Here is the info in one string: "<<name<<endl;

}
