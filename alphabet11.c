#include<stdio.h>
int main()
{
	int i;
	char s[100],alphabets_count=0,number_count=0;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
		{
			alphabets_count++;
		}
		if(s[i]>='0' && s[i]<='9')
		{
			number_count++;
		}
	}
	if((alphabets_count && number_count)>0)
	printf("yes");
	else
	printf("no");
return 0;
}
