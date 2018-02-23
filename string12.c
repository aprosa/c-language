#include<stdio.h>
#include<string>
int main() 
{
char a[50],b[50];
int i,m,n;
m=strlen(a);
n=strlen(b);
if(m==n)
{
printf("%s",a);
scanf("%s",a);
}
else if(m>n)
{
printf("%s",b);
scanf("%s",b);
}
else
{
printf("%s",b);
}
return 0;
}
