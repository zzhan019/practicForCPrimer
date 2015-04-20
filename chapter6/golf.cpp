#include <iostream>
using namespace std;
int main()
{
	const int MAX = 5;
	int golf[MAX];
	
	cout<<"you should enter "<<MAX<<" rounds\n";
	for(int i=0; i<MAX; i++)
	{
		cout<<"Round #"<<i+1<<" : ";
		while(!(cin>>golf[i]))
		{
			cin.clear();
			while(cin.get()!='\n')
			{continue;}
			cout<<"please enter a number: ";
		}
	}
	
	int total=0;
	for(int i=0;i<MAX;i++)
	{	cout<<"golf["<<i<<"] = "<<golf[i]<<endl;
		total+=golf[i];}
	cout<<"total: "<<total<<endl;
	cout<<"average: "<<total/MAX<<endl;
}
