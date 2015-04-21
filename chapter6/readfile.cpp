#include  <iostream>
#include  <fstream>
#include  <cstdlib>
using namespace std;
int main()
{
	char ch;
	int total = 0;
	ifstream infile;
	infile.open("test.txt");
	if(!infile.is_open())
	{
		exit(EXIT_FAILURE);
	}
	while(!infile.eof())
	{
		infile>>ch;	
		cout<<ch;
		total++;
	}
	infile.close();
	
	cout<<"\ntotal: "<<total<<" charactors\n";
}
