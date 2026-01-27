#include<stdio.h>
#include<conio.h>
struct Student{
int roll;
char name[20];
int marks;
};
void main(){
struct Student s;
struct Student*ptr;
ptr=&s;
printf("Enter roll number : ");
scanf("%d",&ptr->roll);
printf("enter name : ");
scanf("%s",&ptr->name);
printf("Enter marks : ");
scanf("%d",&ptr->marks);
printf("Name : %s\nRoll : %d\nMarks  : %d``\n",s.name,s.roll,s.marks);
}