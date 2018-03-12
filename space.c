#include <stdio.h>
#include<string.h>
int main()
{
 char s[100];
 int l,m;
 scanf("%s",s);
 l=strlen(s);
 for(m=0;m<l;m++)
 {
 if((s[m]%2)!=0)
 printf("%c ",s[m]);
 }
  return 0;
}
