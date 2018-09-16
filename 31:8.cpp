#include <iostream>
using namespace std;

class test{
	int size,index;
	int *arr;
public:
	test(int s){
		this->size = s;
		arr = new int[size];
		this->index = -1;
	}

	void push(int value){
		if(index>size){
			cout<<"Stack Out Of Bounds"<<endl;
			return;
		}
		if(value==5){
			value*=pop();
		}
		index++;
		arr[index] = value;
	}

	int pop(){
		if(index<0){
			cout<<"Stack Out Of Bounds"<<endl;
			return 0;
		}
		return arr[index--];
	}

	void traverse(){
		cout<<"Array Printing"<<endl;
		for (int i = 0; i <= index; ++i)
		{
			cout<<arr[i]<<endl;
		}
	}
};

int main(int argc, char const *argv[])
{
	int size;
	cin>>size;
	test t1(size);
	while(size--){
		int value;
		cin>>value;
		t1.push(value);
	}
	t1.traverse();
	return 0;
}