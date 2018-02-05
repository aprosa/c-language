#include<stdio.h>
int main()
{
	int n,hr,min,sec;
	printf("Enter time:");
	scanf("%d",&n);
	if(n>3600){
		min = n/60;
		hr = min/60;
		min = min%60;
		printf("Converted format %d hour %d mins ",hr,min);
	}
	else{
		min = n/60;
		printf("Converted format %d mins %d hr",min,hr);
	}
}
