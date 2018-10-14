#include <iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
class link_list
{
    node *head;
public:
    link_list()
    {
        head=NULL;
    }
    void create_node(int val)
    {
        node *newnode;
        newnode=(struct node*)malloc(sizeof(node));
        newnode->data=val;
        newnode->next=NULL;
        head=newnode;
    }
    void insert_beg(int val)
    {
        if(head==NULL)
            create_node(val);
        else{
            node *firstnode;
            firstnode=(struct node*)malloc(sizeof(node));
            firstnode->data=val;
            firstnode->next=head;
            head=firstnode;
        }
    }
    void insertatend(int val)
    {
        if(head==NULL)
            create_node(val);
            else{
                node *temp;
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                node *newnode;
                newnode=(struct node*)malloc(sizeof(node));
                newnode->data=val;
                newnode->next=NULL;
                temp->next=newnode;
            }
    }
    void insertatloc(int val,int loc)
    {
        if(head==NULL)
        {
            create_node(val);
        }
        else if(head->next==NULL)
        {
            insertatend(val);
        }
        else{
            node *temp;
            temp=head;
            for(int i=1;i<loc-1;i++)
            {
                temp=temp->next;
            }
            node *newnode;
            newnode=(struct node*)malloc(sizeof(node));
            newnode->data=val;
            newnode->next=temp->next;
            temp->next=newnode;

        }
    }
    void deleteatbeg()
    {

        node *temp;
        temp=head;
        head=temp->next;
    }
void deleteatend()
{
    node *temp,*q;
    q=head;
    while(q->next!=NULL)
    {
        temp=q;
        q=q->next;
    }
    temp->next=NULL;
    delete(q);
}
 void deleteatloc(int loc)
{
    node *temp,*q;
    int i=0;
    q=head;
    while(i!=loc-1)
    {
        temp=q;
        q=q->next;
    }
    temp->next=q->next;
    delete(q);
}
    void traverse()
    {
        struct node *current;
        for(current=head;current!=NULL;current=current->next)
        {
            cout<<current->data<<endl;
        }
    }
};
int main()
{
    link_list l1;
    l1.create_node(5);
    l1.insert_beg(60);
    l1.insert_beg(260);
    l1.insert_beg(160);
    l1.insert_beg(100);
    l1.insertatend(80);
    l1.insertatloc(200,3);
    l1.deleteatbeg();
    //l1.deleteatend();
    //l1.deleteatloc(3);
    l1.traverse();

    return 0;
}

