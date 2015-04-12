#include <iostream>

const double KiloMeterToMile = 0.6214;
const double GalenToLiter = 3.875;

int main()
{
	using namespace std;
	double nOil;
	
	cout<<"Please enter how much oil(liter) do you use every 100kilometers:"<<endl;
	cin>>nOil;
	
	cout<<"Your oil using is "<<endl;
	cout<<"In Europe: "<<nOil<<"L/100KM"<<endl;
	cout<<"In Americ: "<<100*KiloMeterToMile/(nOil/GalenToLiter) <<"mpg"<<endl;

}
