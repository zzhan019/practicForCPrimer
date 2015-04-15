#include <iostream>

int main()
{
	using namespace std;
	int point = 22;
	int *pointer;
	pointer = &point;
	
	cout<<"value: point="<<point;
	cout<<", *pointer="<<*pointer<<endl;

	cout<<"address: &point="<<&point;
	cout<<", pointer="<<pointer<<endl;

	*pointer +=1;

	cout<<"update point: "<<point<<endl;	

	int *pt;
	pt=(int*)8000;

	//cout<<"value : *pt="<<*pt;
	cout<<"address: pt="<<pt<<endl;

}
