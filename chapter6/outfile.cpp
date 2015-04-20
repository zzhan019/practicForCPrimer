#include<iostream>
using namespace std;
#include<fstream>

int main()
{
	ofstream outfile;
	outfile.open("outfile.txt");
	outfile<<"helloworld\n";
	outfile.close();
}
