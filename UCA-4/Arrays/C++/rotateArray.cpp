/*
* Rotate An Array By Given Times
*/
#include <iostream>
using namespace std;
int size = 0;

void rotate(int *arr,int pos=0){
	while(pos--){
		int temp = arr[size-1];
		for (int i = size-1; i > 0; --i)
		{
			arr[i] = arr[i-1];
		}
		arr[0] = temp;
	}
}

void traverse(int *arr){
	for (int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	size = atoi(argv[1]);
	int arr[size];
	for (int i = 0; i < size; ++i)
	{
		arr[i] = atoi(argv[i+2]);	
	}
	rotate(arr,1);
	traverse(arr);
	return 0;
}