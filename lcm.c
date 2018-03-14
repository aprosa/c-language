#include <stdio.h>
int main() 
{
int x,y,remainder,gcd,lcm,x1,y1;
printf("\n enter the first number");
scanf("%d",&x);
printf("\n enter the second number");
scanf("%d",&y);
x1=x;
y1=y;
do
{
remainder=x%y;
if(remainder==0)
break;
x=y;
y=remainder;
}
while(remainder!=0);
gcd=y;
lcm=(a*b)/gcd;
printf("\n the lcm of  given number is: %d",lcm);
return 0;
}
