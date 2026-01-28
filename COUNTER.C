#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
char a[20],c;
int count=0,i;
clrscr();
printf("Enter a string : ");
gets(a);
for(i=0;i<strlen(a);i++)
{
c = tolower(a[i]);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
count++;
}}
printf("No of vowels is %d",count);

getch();
return 0;
}
