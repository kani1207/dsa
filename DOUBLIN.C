#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
int data;
struct node *prev;
struct node *next;
};
struct node *head = NULL;
void iab(int data)
{
struct node *newNode=(struct node*)malloc(sizeof(struct node));
newNode->data=data;
newNode->prev=NULL;
newNode->next=head;
if(head!=NULL)
{
head->prev=newNode;
}
head=newNode;
}
void iae(int data)
{
struct node *newNode=(struct node*)malloc(sizeof(struct node));
newNode->data=data;
newNode->next=NULL;
head=newNode;
return;
}
struct node *temp = head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newNode;
newNode->prev=temp;
}
void traverseforward()
{
struct node *temp = head;
printf("forward traversal: ");
while (temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
printf("\n");
}
int main()
{
clrscr();
iab(10);
iab(20);
iae(30);
iae(40);
traverseforward();
getch();
}


