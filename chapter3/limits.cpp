#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout<<"int is "<<sizeof(n_int)<<" bytes"<<endl;
	cout<<"short is "<<sizeof(n_short)<<" bytes"<<endl;
	cout<<"long is "<<sizeof(n_long)<<" bytes"<<endl;
	cout<<"long long is "<<sizeof(n_llong)<<" bytes"<<endl;	
	
	cout<<"Max number of int is "<<n_int<<endl;
	cout<<"Max number of short is "<<n_short<<endl;
	cout<<"Max number of long is "<<n_long<<endl;
	cout<<"Max number of long long is "<<n_llong<<endl;

}
