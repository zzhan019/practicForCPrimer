#include <iostream>
using namespace std;

int main()
{
	char ch;

	cin.get(ch);

	while(ch!='.')
	{
		if(ch == '\n')
		{
			cout<<ch;
		}
		else
		{
			//cout<<++ch;
			cout<<ch+1;
		}
		cin.get(ch);
	}
}
