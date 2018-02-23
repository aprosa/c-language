#include <stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	int i,j;
	printf("\nenter the string1");
	scanf("%s",str1);
	printf("\n enter the string2");
	scanf("%s",str2);
	for(i=0;str1[i];i++)
	{
	}
	for(j=0;str2[j];j++)
	{
		str1[i]=str2[j];
		i++;
	}
	str1[i]=i;
	printf("\n%s",str1);
	return 0;
}
