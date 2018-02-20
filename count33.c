#include <stdio.h>
 int main()
{
char    str[100];
int countDigits;
int counter;
countDigits=countAlphabet=0;
printf("Enter a string: ");
gets(str);
for(counter=0;str[counter]!=NULL;counter++)
    {
 if(str[counter]>='0' && str[counter]<='9')
 countDigits++;
 }
printf("\nDigits: %d \nAlphabets: : %d",countDigits,countAlphabet);
return 0;
}
