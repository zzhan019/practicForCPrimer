#include <iostream>
using namespace std;
struct CandyBar
{
	string name;
	float weight;
	int calori;
};

int main()
{
	CandyBar snack = {"Mocha Munch", 2.3, 350};
	cout<<"name: "<<snack.name<<endl;
	cout<<"weight: "<<snack.weight<<endl;
	cout<<"calori: "<<snack.calori<<endl;
}
