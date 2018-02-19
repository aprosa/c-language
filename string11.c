#include <stdio.h>
int main()
{ 
long long n,string;
int count = 0;
printf("\nEnter an character");
scanf("%11d", &n);
while(n != 0)
{
n /= 10;
++count;
}
printf("\nNumber of digits %d", count);
}
