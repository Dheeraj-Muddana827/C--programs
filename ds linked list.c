#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head=NULL;

void createlist()
{  
    int choice;
    struct node*temp,*newnode;
    newnode=malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    head=newnode;
    temp=head;
    printf("enter 1 to continue or 0 to stop:");
    scanf("%d",&choice);
    while(choice==1)
    {
    newnode=malloc(sizeof(struct node));
    temp->next=newnode;
    printf("enter data:");
    scanf("%d",&newnode->data);
    temp=temp->next;
    printf("enter 1 to continue or 0 to stop:");
    scanf("%d",&choice);
    }
  }
    void traverse()
    {
    struct node*temp;
    temp=head;
    do
    {
    printf("%d->",temp->data);
    temp=temp->next;
    }while(temp->next!=NULL);
    printf("%d",temp->data);
    }
    void insertatbegin()
    {
    struct node*temp,*newnode;
    newnode=malloc(sizeof(struct node));
    printf("\nenter data:\n");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    traverse();
    }
    void reverse()
    {
    struct node*temp,*x=NULL;
    temp=head;
    while(temp->next!=0)
    {
    x=temp->next;
    x->next=temp;
    temp=x;
    }
    head=temp;
    traverse();
    }
    void create_list()
    {
    struct node*temp,*newnode;
    int i,n;
    printf("enter no of nodes:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    newnode=malloc(sizeof(struct node));
    printf("enter the value:");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
    head=newnode;
    temp=head;
    }
    else
    {
    temp->next=newnode;
    temp=newnode;
    }
    }
    traverse();
    }
    void main()
    {
    create_list();
    }