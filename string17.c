#include<stdio.h>
#include<string.h>
int main()
{
char st1[30],st2[30];
printf("\n Enter a string");
scanf("%s",st1);
st2=strrev(st1);
if(st1==st2)
{
printf("Yes");
}
else
{
printf("No");
return 0;
}
}
