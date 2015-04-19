#include <iostream>
using namespace std;

const int idex = 16;

int main()
{
	long long factorials[idex];

	factorials[0]=factorials[1]=1;
	
	for (int i=2; i<16; i++)
	{
		factorials[i]=factorials[i-1]*i;
	}
	
	for (int i=0; i<16; i++)
	{
		cout<<i<<"! = "<<factorials[i]<<endl;
	}
}
