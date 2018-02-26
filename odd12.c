##include <stdio.h>
int main()
 {
	int m,n,ans;
	printf("\nenter two numbers");
	scanf("%d%d",&m,&n);
  ans=m*n;
  if(ans%2==0)
  printf("odd");
  else
  printf("even");
	return 0;
}
