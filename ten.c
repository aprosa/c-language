#include<stdio.h>
int main()
{
int a[10];
int large,i;
printf("\nenter the ten values :");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
large = a[0];
for(i=0;i<10;i++)
{
if(a[i]>large)
large=a[i];
}
printf("\nthe largest is: %d",large);
return 0;
}
