#include <iostream>

using namespace std;

int main()
{
        int carrots;
        cout<<"How many carrots do you have?"<<endl;
	while(1)
	{
	cin>>carrots;
        if(cin.fail())
        {
		//cout<<carrots<<endl;
		cin.clear();	//clear flag for cin
		cin.sync();	//clear cin cache
                cin.ignore(1024,'\n');	//clean cin stream
		cout<<"Please input an integer:"<<endl;
   		continue;
        }    
        else
	{
		break;
	}
	}
	cout<<"You have "<<carrots<<" carrots."<<endl;
        carrots +=2;
        cout<<"Here you are, now you have "<<carrots<<" carrots"<<endl;
}
