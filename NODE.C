#include<stdio.h>
#include<stdib.h>
struct Node{
int data;
struct Node*next;
};
struct Node*insert_at_beginning(struct Node*head,int data)
{
struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=data;
newNode->next=head;
head=newNode;
return head;
}
struct Node*insert_at_end(struct Node*head,int data)
{
struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=data;
newNode->next=NULL;
if(head==NULL){
return newNode;
}
struct Node*temp=head;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=newNode;
return head;
}

