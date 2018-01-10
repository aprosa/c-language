#include <stdio.h>
int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    
    if(number % 3 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);

    return 0;
}
