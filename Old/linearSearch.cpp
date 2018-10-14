//WAP to Perform Linear Search
#include <iostream>
using namespace std;

class searchLinear(){
	int arr[5];
public:
	searchLinear(){
		cout<<"Enter Elements"<<endl;
		for (int i = 0; i < 5; ++i)
			cin>>arr[i];
	}

	int search(int number){
		for (int i = 0; i < 5; ++i)
		{
			if(arr[i]==number)
				return i;

			return -1;
		}
	}

	void printIndex(int answer){
		if(answer==-1){
			cout<<"Not Found"<<endl;
		}else{
			cout<<"Number found at Index "<<answer<<endl;
		}
	}
};