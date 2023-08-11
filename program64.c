#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char str[60];
    int i, c1 = 0, c2 = 0, c3 = 0;
    printf("Enter the string:\n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '$' || str[i] == '@' || str[i] == '%' || str[i] == '&' || str[i] == '!' || str[i] == '#' || str[i] == '^')
            c1++;
        else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            c2++;
        else
            c3++;
    }
    printf("Total count of special characters is:%d\n", c1);
    printf("Total count of vowels is:%d\n", c2);
    printf("Total count of consonants is:%d\n", c3);
    return 0;
}
