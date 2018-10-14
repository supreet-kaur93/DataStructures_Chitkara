//WAP For Deletion Of Arrays
#include <iostream>
using namespace std;

class test{
	int arr[5];
	public:
		test(){
			cout<<"Enter Elements"<<endl;
			for (int i = 0; i < 5; ++i)
				cin>>arr[i];
		}

		void deleteElement(int position){
			if(position==5){
				arr[position-1] = 0;
			}else{
				for (int i = position; i < 5; ++i)
				{
					arr[i] = arr[i+1];
				}
			}
		}

		void printArray(){
			cout<<"Printing Array"<<endl;
			for (int i = 0; i < 5; ++i)
			{
				cout<<arr[i]<<endl;
			}
		}
};

int main(){
	test t1;
	t1.deleteElement(1);
	t1.printArray();
	return 0;
}