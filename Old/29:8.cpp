//Wap to accept n number in an array and perform insertion sort,
//Accept a number from user and put in right place 

#include <iostream>
using namespace std;

void swap(int *arr,int a, int b){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void insertionSort(int *arr,int n){
	int i=1;
	while(i<n){
		int j = i;
		while(j>0 && arr[j-1]>arr[j]){
			swap(arr,j,j-1);
			j--;
		}
		i++;
	}
	cout<<"Final Result"<<endl;
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<endl;
	}
}

int main(int argc, char const *argv[])
{
	int size;
	cout<<"Enter Size of Elements"<<endl;
	cin>>size;
	int *arr = new int[size];
	for (int i = 0; i < size; ++i)
	{
		cin>>arr[i];
	}
	insertionSort(arr,size);
	int test;
	cout<<"Enter Element To Add"<<endl;
	cin>>test;
	arr[size] = test;
	insertionSort(arr,size+1); 
	return 0;
}