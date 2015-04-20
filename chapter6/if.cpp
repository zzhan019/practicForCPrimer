#include <iostream>
using namespace std;

int main()
{
	int space=0;
	int total=0;

	char ch;
	cin.get(ch);
	while(ch!='.')
	{
		if(ch==' ')
		{
			space++;
		}
		total++;
		cin.get(ch);
	}

	cout<<space<<" space and "<<total<<" characters in all"<<endl;
}
