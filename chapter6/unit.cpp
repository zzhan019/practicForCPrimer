#include <iostream>

using namespace std;

struct member
{
	string name;
	double money;
};

int main()
{
 	int number;

        cout<<"Please input the number of donations: ";
        while(!(cin>>number))
        {
                cout<<"Please input an intenger: ";
                cin.clear();
		cin.ignore(1024,'\n');
	}	

	 member listMember[number];
	//member *pt = listMember;
	for(int i=0;i<number;i++)
	{
		cout<<"\nPlease input name #"<<i<<" : ";
		cin>>listMember[i].name;
		cout<<"\nPlease input money #"<<i<<" : ";
		cin>>listMember[i].money;
	}
	
	cout<<"The Ggrand Patrons:\n";
	for(int i=0;i<number;i++)
        {
      		if(listMember[i].money>10000)
		{
			if(listMember[i].name=="")
			{cout<<"none";}
			else
			{cout<<listMember[i].name<<endl;}
		}
	}

}




