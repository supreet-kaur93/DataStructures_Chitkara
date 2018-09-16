#include <iostream>
using namespace std;

int main(){
	int arr[5];
	cout<<"Enter Array Elements"<<endl;
	for (int i = 0; i < 5; ++i)
	{
		cin>>arr[i];
	}
	int small1 = INT_MAX,small2 = INT_MAX;
	for (int i = 0; i < 5; ++i)
	{
		if(small1>arr[i]){
			small2 = small1;
			small1 = arr[i];
		}else if(arr[i]<small2 && arr[i] != small1){
			small2 =arr[i];
		}
	}
	cout<<small1<<endl<<small2;
}