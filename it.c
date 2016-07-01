#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
scanf("%d %d");
printf("Before swapping %d %d",a,b);
if(a!=b)
{
a=a^b;
b=b^a;
a=a^b;
printf("After swapping %d %d",a,b);
}
getch();
}
