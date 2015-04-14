#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	char charr[20];
	string str;

	cout<<"before input, length of charr is: "<<strlen(charr)<<endl;
	cout<<"before input, length of str is: "<< str.size()<<endl;

	cout<<"please enter the frist line: "<<endl;
	cin.getline(charr,20);
	cout<<"your input is: "<<charr<<endl;

	cout<<"please enter the second line: "<<endl;
        getline(cin,str);
        cout<<"your input is: "<<str<<endl;
	
	cout<<"after input, length of charr is: "<<strlen(charr)<<endl;
        cout<<"after input, length of str is: "<< str.size()<<endl;
}
