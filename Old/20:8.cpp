#include <iostream>
using namespace std;

class Queue{
	int *arr;
	int size;
	int front,rear;
public:
	Queue(int size){
		this->size=size;
		arr = new int[size];
		front=-1;
		rear=-1;
	}
	void enqueue(int value){
		if(rear==(size-1)){
			cout<<"OverFlown"<<endl;
		}else if(front==-1 && rear == -1){
			front=0;
			rear=0;
			arr[rear]=value;
		}else{
			rear++;
			arr[rear] = value;
		}
	}

	void dequeue(){
		if (front==-1 || front>rear)
		{
			cout<<"UnderFlow"<<endl;
		}else{
			front++;
		}
	}

	void traverse(){
		for (int i = 0; i < size; ++i)
		{
			cout<<arr[i]<<endl;
		}
	}

	int peek(){
		return arr[front];
	}

	int isEmpty(){
		if(front== -1 && rear==-1)
			return 1;
		else
			return 0;
	}
};

class StackQ{
	Queue *q1,*q2;
public:
	StackQ(int size){
		q1=new Queue(size);
		q2=new Queue(size);
	}

	void pop(){
		if(q1->isEmpty()){
			
		}
	}

};

int main(int argc, char const *argv[])
{
	StackQ s1(5);
	s1.pop();
	return 0;
}