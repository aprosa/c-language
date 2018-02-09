#include <stdio.h>
#define MAX_PARAGRAPH_NAME 100
int main()
 {
 paragraph*pg
 int count = 0; 
 char filename[MAX_PARAGRAPH_NAME];
 char c;  
 printf("Enter paragraph name: ");
 scanf("%s", paragraphname);
 pg = popen(paragraphname, "r");
 if (pg == NULL)
 {
 printf("Could not open paragraph %s", paragraph);
 }
 for (c = getc(pg); c != EOF; c = getc())
 if (c == '\n') 
 count = count + 1;
 fclose(fp);
 printf("The paragraph %s has %d lines\n ", paragraphname, count);
 return 0;
 } 
