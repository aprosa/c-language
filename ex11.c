#include<stdio.h>
int main()
{
int c;
scanf("%d",&c);
do
{
c--;
}while(c%10==0)
printf("%d",c);
return 0;
}
