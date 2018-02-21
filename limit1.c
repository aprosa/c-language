#include <stdio.h>
#include <conio.h>
int main()
{
int a,b,c,d,e,flag;
printf("\nEnter The Lower Limit");
scanf("%d",&m);
printf("\nEnter The highest Limit");
scanf("%d",&n);
printf("\nPrime Numbers Between %d & %d Are:\n",a,b);
for(i=a ; i<=b ; i++)
{
e=i;
flag=1;
for(d=2 ; (d<=e/2)&&flag ;d++)
{
if(e%d==0)
flag=0;
}
if(flag)
printf("%d \n",c);
}
}
