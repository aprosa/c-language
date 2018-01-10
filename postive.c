#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num > 0)
    {
        printf("Number is zero");
    }
    if(num < 0)
    {
        printf("Number is postive");
    }
    if(num == 0)
    {
        printf("Number is negative");
    }

    return 0;
}
