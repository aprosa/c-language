#include<stdio.h>
void quicksort(int number[25],int first,int last)
{
 int i, j, pivot, temp;
{
 pivot=first;
  i=first;
  j=last;
while(i<j)
 {
 while(number[i]<=number[pivot]&&i<last)
 i++;
 while(number[j]>number[pivot])
 j--;
 int main(){
   int i, count, number[25];
printf("How many elements are u going to enter?: ");
 scanf("%d",&count);
printf("Enter %d elements: ", count);
scanf("%d",&number[i]);
for(i=0;i<count;i++)
 quicksort(number,0,count-1);
 printf("Order of Sorted elements");
 for(i=0;i<count;i++)
 printf(" %d",number[i]);
 return 0;
}
