#include <iostream>
 template <class T>
 int getArrayLen(T& array)
 {
        return sizeof(array)/sizeof(array[0]); //sizeof()--> total size
 }

int main()
{
		
	int arr[3];
	arr[0] = 4;
	arr[1] = 6;
	arr[2] = 9;
	 
	int arrcost[8] = {10,11,12};	
	for(int i=0; i< getArrayLen(arrcost); i++)
	{
		std::cout<<"arrcost["<<i<<"]: "<<arrcost[i]<<std::endl;
	}
	
	std::cout<<"total size of arr[] is "<<sizeof(arr)<<std::endl;
	std::cout<<"total size of arr[] is "<<sizeof arr<<std::endl;
}
