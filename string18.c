#include <stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int n,i,temp;
    scanf("%s",b);
    n=strlen(b);
    if(n%2!=0)
      {
          temp=n/2;
          a[temp]='*';
          printf("%s",b);
      }
      else
      {
          temp=n/2;
          a[temp]='*';
          a[temp-1]='*';
          printf("%s",b);
      }
	return 0;
}
