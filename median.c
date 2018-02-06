#include<stdio.h>
int main() 
{
int x[10],n,i;
float median(int,int[]);
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&x[i]);
printf("median=%f\n",median(n,x));
getch();
}
float median(int n, int x[]) 
{
    float temp;
    int i, j;
 for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) 
        {
            if(x[j] < x[i]) 
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
        }
        }}
   if(n%2==0) {
       {
       x[n\2];
        return 0;
    }
}
