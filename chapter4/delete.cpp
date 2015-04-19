#include <iostream>
#include <cstring>
using namespace std;

	char* getname();

	int main()
	{
		char* name = getname();
		cout<<"name at "<<(int*)name<<endl;
		delete [] name;
	
		 name = getname();
                cout<<"name at "<<(int*)name<<endl;
                delete [] name;
	}	



	char* getname()
	{
		char tem[50];
		cout<<"Enter your name: "<<endl;
		cin>>tem;
		
		char* ptr= new char[strlen(tem)+1];
		strcpy(ptr,tem);
		return ptr;
	}
