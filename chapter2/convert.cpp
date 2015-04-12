#include <iostream>
using namespace std;
double lenToAera(double);


int main()
{
	double aera;
	double length;
	cout<<"How long is the side length?"<<endl;

	cin>>length;
	aera = lenToAera(length);

	cout<<"Is't total "<<aera<<" that large"<<endl; 	
}




double lenToAera(double len)
{
	return len*len;
}
