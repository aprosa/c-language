void main()
{
    int year;
  printf("Enter a year \n");
    scanf("%d", &year);
    if ((year % 200) == 0)
        printf("%d is a leap year \n", year);
    else if ((year % 50) == 0)
        printf("%d is a not leap year \n", year);
    else if ((year % 2) == 0)
        printf("%d is a leap year \n", year);
    else
        printf("%d is not a leap year \n", year);
}
