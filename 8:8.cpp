#include <iostream>
using namespace std;

struct Node
{
	Node *next;
	int data;
};

class SwapLL{
	Node *head;
public:
	SwapLL(){
		head = NULL;
	}

	Node* createNode(int value){
		Node *temp = new Node();
		temp->data=value;
		temp->next=NULL;
		return temp;
	}
	void push(int value){
		Node *ptr = createNode(value);
		if(head==NULL){
			head = ptr;
		}else{
			Node *p;
			for (p=head;p->next!=NULL;p=p->next);
			p->next = ptr;	
		}
	}

	void swapNodes(int x,int y){
		Node *currentX,*currentY;
		Node *prevX,*prevY;
		for (Node *p=head;p->next!=NULL;p=p->next)
		{
			if (p->data==x)
			{
				
			}
		}
	}

	void traverse(){
			for (Node *p=head;p!=NULL;p=p->next){
				cout<<p->data<<endl;
			}
	}
};

int main(){
	SwapLL obj;
	obj.push(5);
	obj.push(10);
	obj.push(15);
	obj.push(20);
	obj.traverse();
	return 0;
}

