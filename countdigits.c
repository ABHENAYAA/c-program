#include<stdio.h>
#include<conio,h>
void main()
{
int n;
int count=0;
printf("\n enter the number  :  ");
scanf("%d",&n);
while(n>0)
{
n=n/10;
count++;
}
printf("\n no of digits are  : %d",count);
getch();
}
