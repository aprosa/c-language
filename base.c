#include<stdio.h>
int main()
{
int base,exponent;
long long result=1;
printf("enter base number:");
scanf("%d",&base);
printf("enter the exponent:");
scanf("%d",&exponent);
while(exponent!=0)
{
result*=base;
--exponent;
}
printf("answer=%d",result);
return 0;
}
