#include <stdio.h>
int main() 
{
char string[100];
int i=0,count=0,flag=0;
printf("\n enter the given string:");
scanf("%s",string);
while(string[i]!='\0')
{
if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')
flag=1;
i++;
}
if(flag==1)
{
	printf("\nyes");
}
else
{
printf("\n no");
}
return 0;
}
