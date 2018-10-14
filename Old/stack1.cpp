#include <iostream>
using namespace std;

class Stack{
	int size,top;
	int *arr;
public:
	Stack(){
		top = -1;
		cout<<"Enter Size "<<endl;
		cin>>size;
		arr = new int[size];
	}

	~Stack(){
		delete arr;
	}

	void push(int item){
		if(top != size){
			top++;
			arr[top] = item;
		}else{
			cout<<"Stack Overflow Exception"<<endl;
		}
	}
	void pop(){
		if(top != -1){
			arr[top] = 0;
			top--;
		}else{
			cout<<"Stack Underflow Exception"<<endl;
		}
	}

	void peek(){
		cout<<arr[top]<<endl;
	}

	void traverse(){
		for (int i = top; i >= 0; --i)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
};

int main(){
	Stack s1;
	s1.push(3);
	s1.push(6);
	s1.push(9);
	s1.push(12);
	s1.traverse();
	s1.peek();
	s1.pop();
	s1.peek();
	return 0;
}