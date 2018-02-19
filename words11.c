#include <stdio.h>
int main()
{
int n, num = 0;
printf("\nEnter any number to print in words ");
scanf("%d", &n);
while(n != 0)
{
num = (num * 2) + (n % 2);
n /= 2;
}
while(num !=0);
switch(num % 2)
{
case 0: 
printf("Zero ");
break;
case 1: 
printf("One ");
break;
num=num/2;
return 0;
}
