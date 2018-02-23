#include<stdio.h>
int main()
{
int m,rem,sum=0;
scanf("%d",&m);
while(m!='\0')
{
rem=n%10;
sum=sum+rem;
n=n/10;
}
printf("%d",sum);
 return 0;
}
