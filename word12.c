#include <stdio.h>
int main()
{
char s[100];
int i,count=1;
scanf("%s",s);
for(i=0;s[i]!='\0;i++)
{
if(s[i]=='')
{
count=count+1;
}
}printf("\n%d",count);
return 0;
}
