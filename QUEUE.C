#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct queue{
struct node*front;
struct node*rear;
};
void initQueue(struct Queue*q)
{
q->front=NULL;
q->rear=NULL;
}
int isEmpty(struct Queue*q)
{
return(q->front==NULL);
}
void enqueue(struct Queue*q,int value)
{
struct node*newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
print("heap overload\n");
return;
}
newnode->data=value;
newnode->next=NULL;
if(q->rear==NULL)
{
q->front=q->next=newnode;
return;
}
q->rear->next=newnode;
q->rear=newnode;
}
void dequeue(struct Queue*q)
{
if(isEmpty(q))
{
print("queue underflow\n");
return;
}
struct Node*temp=q->front;
print("deleted element %d\n",temp->data);
q->front=q->front->next;
if(q->front==NULL)
q->rear==NULL;
free(temp);
}
void peek(struct Queue*q)
{
if(isEmpty(q))
{
print("queue is empty");
return;
}
print("front element %d\n",q->front->data);
}
void display(struct Queue*q)
{
if(isEmpty(q))
{
print("queue is empty");
return;
}

struct node*temp=q->front;
print("queue elements: ");
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
print("NULL\n");
}
int main()
{
struct Queue q;
initQueue(&q);
enqueue(&q,10);
enqueue(&q,20);
enqueue(&q,30);
display(&q);
dequeue(&q);
peek(&q);
return 0;
}