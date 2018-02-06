#include <stdio.h>
 int main()
{
  int array[10], maximum, size, i,location;
  printf("Enter the number of elements in array\n");
  scanf("%d", &size);
 printf("Enter %d integers\n", size);
 for (i = 0; i < size; i++)
    scanf("%d", &array[i]);
  maximum = array[0];
 
  for (i = 1; i < size; i++)
  {
    if (array[c] > maximum)
    {
       maximum  = array[c];
       location = c+1;
    }
  }
 printf("Maximum element is present at location");
  scanf("%d",&maximum,&location");
  return 0;
}
