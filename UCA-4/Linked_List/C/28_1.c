//Implement A Linked List and Calculate its Size
// 28 Sept,2018
#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

struct Node* createNode(int value){
	struct Node *temp = (struct Node*) malloc(sizeof(struct Node));
	temp->data = value;
	temp->next = NULL;
	return temp;
};

struct Node *head = NULL;

void insertNode(int value){
	if(head==NULL){
		head = createNode(value);
	}else{
		struct Node* current = head;
        while(current->next!=NULL){
            current = current->next;
        }
		current->next=createNode(value);
	}
}

void insertNodeBeg(int value){
    if(head==NULL){
        head = createNode(value);
    }else{
        struct Node *temp = createNode(value);
        temp->next=head;
        head = temp;
    }
}

void traverse(){
	struct Node* current = head;
	while(current!=NULL){
		printf("%d\n",current->data);
		current=current->next;
	}
    free(current);
}

int calculateSize(){
	int count = 0;
	struct Node* current = head;
	while(current!=NULL){
		count++;
		current=current->next;
	}
	return count;
    free(current);
}

int main(int argc, char const *argv[])
{
	insertNode(5);
	insertNode(6);
    insertNodeBeg(7);
    traverse();
	printf("%d\n",calculateSize());
	return 0;
}
