#include<iostream>

int main()
{
	using namespace std;

	int *pt = new int[5];

	pt[0] = 0;
	pt[1] = 1;
	pt[2] = 2;

	pt +=1;
	
	cout<<"after pt+1, now pt[0]="<<pt[0]<<endl; 
	
	pt-=1;
	delete [] pt;
}
