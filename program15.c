#include <stdio.h>
#include <string.h>
int main()
{
    int num, d, c;
    char s[30];
    printf("Enter the number:\n");
    scanf("%d", &num);
    printf("Enter the strng:\n");
    scanf("%s", &s);

    d = printf("%d", num);
    printf("Number of digits:\n %d", d);
    c = printf("%s", s);
    printf("Number of characters:%d\n", c);

    return 0;
}
