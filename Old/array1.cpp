//WAP For Addition of Elements in Array
#include <iostream>
using namespace std;

class test{
	int arr[5];
public:
	test(){
		cout<<"Enter Array Elements"<<endl;
		for (int i=0;i<5;++i){
			cin>>arr[i];
		}
	}
	void addElement(int number,int position=0){
		//Shifting The Elements
		for (int i = 5; i >= position; --i)
		{
			arr[i] = arr[i-1];
		}
		arr[position] = number;
	}
	void printArray(){
		cout<<"Printing Full Array"<<endl;
		for (int i = 0; i < 5; ++i)
		{
			cout<<arr[i]<<endl;
		}
	}
	void printArrayExtra(){
		cout<<"Printing Array Extra"<<endl;
		for (int i = 0; i <= 5; ++i)
		{
			cout<<arr[i]<<endl;
		}
	}
};

int main(){
	test t1;
	t1.addElement(5);
	t1.printArray();
	t1.printArrayExtra();
	return 0;
}