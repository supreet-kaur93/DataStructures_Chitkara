#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

class LinkedList
{
	Node *start;
public:
	LinkedList()
	{
		start=NULL;
	}

	Node* getStart(){
		return start;
	}

	Node* createNode(int value){
		Node *ptr = new Node();
		ptr->data=value;
		ptr->next=NULL;
		return ptr;
	}

	void insertElement(int value){
		Node *ptr = createNode(value);
		if(start==NULL){
			start = ptr;
		}else{
			Node *p;
			for (p = start;p->next!=NULL;p=p->next)
			{}
			p->next = ptr;
		}
	}

	friend void merge(LinkedList o1,LinkedList o2){
		Node *p1 = o1.getStart();
		Node *p2 = o2.getStart();
		while(true)
		{
			if(p1==NULL&&p2==NULL){
				cout<<"Empty Linked List"<<endl;
			}else if()
		}
	}

	void traverse(){
		for (Node *p = start;p!=NULL;p=p->next)
		{
			cout<<p->data<<endl;
		}
	}
};

int main(){
	LinkedList obj;
	obj.insertElement(5);
	obj.insertElement(6);
	obj.insertElement(7);
	obj.insertElement(8);
	obj.insertElement(9);
	obj.traverse();
	LinkedList obj2;
	obj2.insertElement(1);
	obj2.insertElement(2);
	obj2.insertElement(3);
	obj2.insertElement(4);
	obj2.insertElement(5);
	obj2.traverse();

	return 0;
}