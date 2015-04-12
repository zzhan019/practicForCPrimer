#include <iostream>
#include <climits>

#define ZERO 0

int main()
{
	using namespace std;
	
	short sam = SHRT_MAX;
	unsigned short sue = sam;
	
	cout<<"sam has "<<sam<<" dollars"<<endl;
	cout<<"sue has "<<sue<<" dollars"<<endl;

	cout<<"add 1$ to each count"<<endl;
	
	sam = sam +1;
	sue = sue +1;

	cout<<"sam has "<<sam<<" dollars.\nPoor sam!"<<endl;
	cout<<"sue has "<<sue<<" dollars"<<endl;

	cout<<"clean count!"<<endl;
	
	sam = ZERO;
	sue = ZERO;

	cout<<"sam has "<<sam<<" dollars"<<endl;
        cout<<"sue has "<<sue<<" dollars"<<endl;

	cout<<"take 1$ from each count"<<endl;
	
	sam = sam -1;
	sue = sue -1;

	cout<<"sam has "<<sam<<" dollars"<<endl;
        cout<<"sue has "<<sue<<" dollars.\nLucky sue!"<<endl;

}
