#include <iostream>
#include <cstring>
using namespace std;
struct product
{
	char desc[20];
	float volume;
	double price;
/*	product()
	{
		strcpy(desc,"construct");
		volume = 2.88;
		price = 18;
	};
	~product(){};
*/
};

int main()
{
	product glass = 
	{
		"with no water",
		12.9,
		20
	};
	cout<<"the price of glass is: "<<glass.price<<endl;

//	product box;
//	cout<<"the price of box is: "<<box.price<<endl;

	product xglass;
	xglass = glass;

 	cout<<"the price of xglass is: "<<xglass.price<<endl;
}
