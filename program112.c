#include <stdio.h>
int main()
{
    int year;
    printf("Enter year:\n");
    scanf("%d", &year);
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
        printf("It is Leap Year\n");
    else
        printf("It is not a Leap Year\n");
    return 0;
}
