#include <stdio.h>  
int main()
{
char    str[100];
int countSpecialChar;
int counter;
printf("Enter a string: ");
gets(str);
for(counter=0;str[counter]!=NULL;counter++)
 {
 if(str[counter]>='0' && str[counter]<='9')
 else
 countSpecialChar++;
 }
 printf(" \nSpecial Characters:%d countSpecialChar);
 return 0;
}
