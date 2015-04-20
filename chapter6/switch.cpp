#include <iostream>
using namespace std;

	void menu();

int main()
{
	
	int choice;
	menu();
	cin>>choice;
	
	while(choice!=5)
	{
		switch(choice)
		{
			case 1 :	cout<<"there is a fault\n";
					break;
			case 2 :	cout<<"show your report\n";
					break;
			case 3 :	cout<<"what is alibi\n";
                                        break;
			case 4 :	cout<<"boss is out of office\n";
                                        break;
			default:	cout<<"it's not a choice\n";
		}
		cin>>choice;
	}
	cout<<"bye\n";
}






	void menu()
	{
		cout<<"please give a choice:\n"
			"1) alarm	2) report\n"
			"3) alibi	4) comfort\n"
			"5) Quit!\n"; 
	}

