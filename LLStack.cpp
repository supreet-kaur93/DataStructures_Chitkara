//Create a Stack using Linked List

#include <iostream>
using namespace std;

struct Node
{
	Node *next;
	int data;
};

class LLStack{
	Node *top;
public:
	LLStack(){
		top = NULL;
	}

	Node* createNode(int value){
		Node *temp = new Node;
		temp->data=value;
		temp->next = NULL;
		return temp;
	}

	void push(int value){
		Node *ptr = createNode(value);
		Node *p;
		if(top==NULL){
			top = ptr;
		}else{
			for(p=top;p->next!=NULL;p=p->next){}
				p->next = ptr;
				ptr->next=NULL;
		} 
	}

	void pop(){
		if(top==NULL){
			cout<<"Empty Stack"<<endl;
		}else if (top->next==NULL){
			Node *ptr = top;
			top=NULL;
			delete(ptr);
		}else{
			Node *ptr = top;
			top=top->next;
			delete(ptr);
		}
	}

	void traverse(){
		for (Node *ptr=top;ptr!=NULL;ptr=ptr->next)
		{
			cout<<ptr->data<<" ";
		}
		cout<<endl;
	}
};

int main(){
	LLStack obj1;
	obj1.push(5);
	obj1.push(10);
	obj1.push(15);
	obj1.traverse();
	obj1.pop();
	obj1.pop();
	obj1.pop();
	obj1.traverse();
	return 0;
}

