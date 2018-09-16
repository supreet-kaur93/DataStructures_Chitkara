//Selection Sort

#include <iostream>
using namespace std;

void swap(int *arr,int a, int b){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

int findLowest(int *arr,int start,int end){
	int low = start;
	for (int i = start; i < end; ++i)
	{
		if(arr[low]>arr[i])
			low=i;
	}
	return low;
}

void selectionSort(int *arr,int n){
	for (int i = 0; i < n; ++i)
	{
		int test = findLowest(arr,i,n);
		swap(arr,i,test);
	}
}

int main(int argc, char const *argv[])
{
	int size;
	cout<<"Enter Size"<<endl;
	cin>>size;
	int *arr = new int[size];
	for (int i = 0; i < size; ++i)
	{
		cin>>arr[i];
	}
	cout<<endl;
	selectionSort(arr,size);
	cout<<"After Sorting"<<endl;
	for (int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}