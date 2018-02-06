#include <stdio.h>
int main()
{
	char num[10];
	int numeric = 0, i, j, len;
	printf("Enter a number: ");
	gets(num);
	len = strlen(num);
	for(i=0; i<len; i++){
		numeric = numeric * 10 + ( numeric[i] - '0' );
	}
	printf("%d", numeric);
	return 0;
}
