//Circular Linked List insertions

/* WAP that implements the following operations on a circular linked list.
* Insert a new Element at beginning , end and in between the given list.
* Delete an existing element 
* search an element 
* Display all The Elements
*/

#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

class CirclularLinked{
	Node *head;

public:

	CirclularLinked(){
		head = NULL;
	}

	void createLinkedList(int value){
		Node *nn = new struct Node;
		Node *ptr;
		nn->data=value;
		if(head==NULL){
			nn -> next = nn;
			head = nn;
		}else{
			ptr = head;
			while(ptr->next!=head){
				ptr=ptr->next;
			}
			ptr->next = nn;
			nn->next=head;
		}
	}

	void traverse(){
		Node *curr;
		for (curr=head;curr->next!=head;curr=curr->next)
		{
			cout<<curr->data<<endl;
		}
		cout<<curr->data<<endl;
	}
};

int main()
{
	CirclularLinked o1;
	o1.createLinkedList(5);
	o1.createLinkedList(6);
	o1.traverse();	
	return 0;
}

