#include <iostream>
using namespace std;

int main()
{
	const int fav = 33;
	
	int gess = 0;
	cout<<"Please gess my favorit nummer from 1-100: "<<endl;

	cin>>gess;
	do{
	if(gess == 33)
	{
		cout<<"your are right! my favorite number is 33!"<<endl;	
	}
	else
	{
		if(gess<33)
		{
			cout<<"too low, try again!"<<endl;
			cin>>gess;
		}
		else
		{
			cout<<"too high, try again!"<<endl;
                        cin>>gess;
		}
	}
	 }while(gess!=33);
}
