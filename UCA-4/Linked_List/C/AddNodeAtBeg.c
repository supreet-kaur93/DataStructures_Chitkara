#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
}node;

node* createNode()
{

    node *newnode=(node*)malloc(sizeof(node));
    int data;
    scanf("%d",&data);
    newnode->data=data;

    return newnode;
}
void addAtbeg(node **h)
{
    node *s=createNode();

    s->next=*h;
    *h=s;

}

void printlist(node *k)
{
    while(k!=NULL)
    {
        printf("%d     ",k->data);
        k=k->next;
    }
}
int main()
{
    node *head=NULL;
    node *first,*second,*third;

    first=createNode();

    second=createNode();
    first->next=second;

    third=createNode();
    second->next=third;
    third->next=NULL;
    head=first;
    addAtbeg(&head);
    printlist(head);
}
