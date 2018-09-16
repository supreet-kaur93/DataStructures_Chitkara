#include <iostream>
using namespace std;


struct node{
	int data;
	node *next;
};

class linkedList{
	node *head;
public:
	linkedList(){
		head = NULL;
	}

	void createNode(int value){
		node *newNode;
		newNode = (struct node*) malloc (sizeof(node));
		newNode->data = value;
		newNode->next = NULL;
		head = newNode;
	}

	void printHead(){
		cout<<head->data<<endl;
	}
	
};

int main(){
	linkedList l1;
	l1.createNode(10);
	l1.printHead();
	l1.createNode(20);
	l1.printHead();
	return 0;
}