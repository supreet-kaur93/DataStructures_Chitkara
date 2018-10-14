#include <iostream>
using namespace std;

class Stack{
	int top,size;
	char *arr;
public:
	Stack(){
		top = -1;
		cout<<"Enter Size "<<endl;
		cin>>size;
		arr = new char[size];
	}
	~Stack(){
		delete arr;
	}

	void push(char item){
		if(top!=size){
			top++;
			arr[top] = item;
		}else{
			cout<<"Stack Overflow"<<endl;
		}
	}
	void pop(){
		if(top>=0){
			arr[top] = '';
			top--;
		}else{
			cout<<"Stack Underflow"<<endl;
		}
	}
	void checkBalance(char item){
		char test;
		if(test == '{' || test == '[' || test == '('){
			this.push(test);
		}else{
			
		}
	}
};