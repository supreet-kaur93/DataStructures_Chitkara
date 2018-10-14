#include <iostream>
using namespace std;

int main(){
	int arr[8];
	cout<<"Enter your Array"<<endl;
	for (int i = 0; i < 8; ++i)
	{
		cin>>arr[i];
	}
	int mid = 0,start = 0,end = 8,ele = 0;
	cout<<"Enter Element To Find"<<endl;
	cin>>ele;
	for (int i = start; i < end;)
	{
		mid = start+(end-start)/2;
		if(arr[mid]==ele){
			cout<<"Element found at "<<mid<<endl;
			break;
		}else{
			if(arr[mid]>ele){
				end = mid;
			}else{
				start = mid;
			}
		}
	}
}