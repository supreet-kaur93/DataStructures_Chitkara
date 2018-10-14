//Doubly Linked List 

#include <iostream>
using namespace std;

struct Node
{
	Node *prev;
	int data;
	Node *next;
};

class doubleLinkedList{
	Node *head;
public:
	doubleLinkedList(){
		head = NULL;
	}

	Node* createNode(int value){
		Node *nn = new Node;
		nn->data = value;
		nn->prev = NULL;
		nn->next = NULL;
		return nn;
	}

	void insertElement(int value){
		Node *nn;
		if(head == NULL){
			head = createNode(value);
		}else{
			nn=createNode(value);
			nn->next = head;
			head->prev = nn;
			head = nn;
		}
	}

	void insertElement(int value,int position){
		if(head == NULL){
			insertElement(value);
		}else if(head->next == NULL){
			cout<<"Insert at end"<<endl;
			insertElementEnd(value);
		}else{
			cout<<"Insert position called"<<endl;
			Node *nn = createNode(value);
			Node *ptr = head;
			for (int i=0;i<position;++i)
			{
				ptr=ptr->next;
			}
			Node *previous = ptr->prev;
			nn->next = ptr;
			nn->prev = ptr->prev;
			ptr->prev = nn;
			previous->next = nn;
		}
	}

	void insertElementEnd(int value){
		Node *nn;
		if(head==NULL){
			head = createNode(value);
		}else{
			nn=createNode(value);
			Node *ptr;
			for (ptr=head;ptr->next!=NULL;ptr=ptr->next)
			{}
			ptr->next = nn;
			nn->prev = ptr;
		}
	}

	void deleteElementStart(){
		if(head==NULL){
			cout<<"List Empty"<<endl;
		}else if(head->next==NULL){
			Node *ptr = head;
			delete(ptr);
			head = NULL;
		}else{
			Node *ptr = head;
			head = head->next;
			head->prev = NULL;
			delete(ptr);
		}
	}

	void traverse(){
		Node *ptr;
		for (ptr = head;ptr!=NULL;ptr = ptr->next)
		{
			cout<<ptr->data<<endl;
		}
	}
};

int main(){
	doubleLinkedList obj;
	obj.insertElement(5);
	obj.insertElement(10);
	obj.insertElementEnd(15);
	obj.insertElement(20,1);
	obj.deleteElementStart();
	obj.traverse();
	return 0;
}
