#include<stdio.h>
void main()
{
int n, i;
printf("Enter an Integer Number:");
scanf("%d", &n);
for(i=4; i<=n/4; ++i)
{
if(n%i==0)
{
break;
}
}
if(i>n/2)
printf("%d is prime",n);
else
printf("%d is not prime", n);
return 0;
}
