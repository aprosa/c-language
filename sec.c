#include <stdio.h>
 int main()
{
 int input,hour,min,sec;
 printf("input number in total seconds\n");
 scanf("%d", &input_v);
 while(input > 3600)
 {
 hour = input /3600;
 min = input % 60;
 sec = min % 60;
    printf("\n%dhours%dminutes",hour,min,);
    }   
    min = input / 60;
    sec = input % 60;
    printf("%dhour and %dminutes\n",min,sec);
    return 0;
}
