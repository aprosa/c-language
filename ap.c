#include <stdio.h>
int main() 
{
int i, n, data, diff, sum, value;
printf("Enter the value for number");
scanf("%d", &n);
printf("Common difference for arithmetic progression series:");
scanf("%d", &diff);
data = (int *)malloc(sizeof(int) * n);
printf("AP series ");
for (i = 0; i < n; i++)
{
printf("%d ", value);
data[i] = value;
value = value + diff;
}
sum = (n * (data[0] + data[n - 1]))/2;
printf("\nSum of the AP series");
scanf("%d",&sum");
return 0;
}
