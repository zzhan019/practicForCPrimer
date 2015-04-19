#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char animal[20] = "bear";
	const char* bird = "wren";
	char* ps;

	cout<<animal<<" and "<<bird<<endl;

	cout<<"Enter an animal: "<<endl;
	cin>>animal;
	ps = animal;

	cout<<"your input is: "<<ps<<endl;
	
	cout<<"&animal[0]: "<<&animal[0]<<endl;
	cout<<"(int*)animal: "<<(int*)animal<<endl;
	cout<<"animal: "<<animal<<endl;
	cout<<"&ps: "<<&ps<<endl;
	cout<<"(int*)ps: " <<(int*)ps<<endl;
	cout<<"ps: "<<ps<<endl;

	ps = new char[strlen(animal)+1];
	strcpy(ps,animal);

        cout<<"&ps: "<<&ps<<endl;
        cout<<"(int*)ps: " <<(int*)ps<<endl;
        cout<<"ps: "<<ps<<endl;
	
	delete [] ps;
}

