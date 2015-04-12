#include <iostream>
using namespace std;

void simon(int);

int main()
{
	int time;
	simon(1);
	cout<<"time flyes..."<<endl;
	
	cout<<"How much time passed?"<<endl;

	cin>>time;

	simon(time+1);
}


void simon(int n)
{
	cout<<"You have worked for about "<<n<<" hours."<<endl;
	if(n>=4)
	{
		cout<<"Please have a rest."<<endl;
	}
	else
	{
		cout<<"Fighting!!"<<endl;
	}
}
