//WAP 
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

	void push(char item){
		int num1 = arr[top];
		int num2 = arr[top-1];
		switch (item){
			case '+':{
				pop();
				pop();
				push(num1+num2);
				break;
			}
			case '-':{
				pop();
				pop();
				push(num2-num1);
				break;
			}
			case '*':{
				pop();
				pop();
				push(num1*num2);
				break;
			}
			case '/':{
				pop();
				pop();
				push(num2/num1);
				break;
			}
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
	s1.push(12);
	s1.push(7);
	s1.push(3);
	s1.push('-');
	s1.push('/');
	s1.push(2);
	s1.push(1);
	s1.push(5);
	s1.push('+');
	s1.push('*');
	s1.push('+');
	s1.traverse();
	return 0;
}