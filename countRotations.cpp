#include<iostream>
using namespace std;
int countRotations(int arr[],int low,int high)
{
	if(low>high)
	return 0;
	else if(low==high)//only one element is left
	return low;
	int mid=low+(low+high)/2;
	if(mid<high&&arr[mid+1]<arr[mid])
	return mid+1;
	if(mid>low&&arr[mid]<arr[mid-1])
	return mid;
	
	return countRotations(arr,low,mid-1);
	return countRotations(arr,mid+1,high);
	
}

int main()
{
	int i,arr[5];
	for(i=0;i<5;i++)
	cin>>arr[i];
	cout<<countRotations(arr,0,5);
}
