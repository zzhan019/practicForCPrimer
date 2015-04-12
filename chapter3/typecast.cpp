#include <iostream>

int main()
{
	using namespace std;
	char ch = 'x';
	cout<<"the code for "<<ch<<" is "<<int(ch)<<endl;
	
	cout<<"should be the same with "<<static_cast<int>(ch)<<endl;
}
