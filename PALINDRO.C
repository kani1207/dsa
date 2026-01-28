#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char[20],b[20],a[20];
clrscr();
printf("Enter a string : ");
scanf("%s", a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
{
printf("It is a palindrome");
}
else
{
printf("It is not a palindrome");
}
getch();
return 0;
}
