#include <iostream>
using namespace std;


int linearSearch(int *arr,int size,int numToFound){
	for (int i = 0; i < size; ++i)
	{
		if(numToFound==arr[i])
			return i;
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int size = atoi(argv[1]);
	int arr[size];
	for (int i = 0; i < size; ++i)
	{
		arr[i] = atoi(argv[i+2]);
	}
	int numToFound = atoi(argv[argc-1]);
	cout<<"Element "<<numToFound<<" Found at "<<linearSearch(arr,size,numToFound)<<" Index"<<endl;
	return 0;
}