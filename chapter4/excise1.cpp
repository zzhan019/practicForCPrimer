#include <iostream>
using namespace std;
#include <vector>
int main()
{
	int itmp;
	cout<<"please input an integer: "<<endl;
	cin>>itmp;

	int* intstr1 = new int[itmp];
	 vector<int> myVector(itmp);

	delete [] intstr1;


	cout<<(int*)"Home of the jolly bytes"<<endl;
}
