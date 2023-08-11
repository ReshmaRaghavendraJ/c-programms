#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[300];
    int up = 0, low = 0, digit = 0, special = 0, len, i;
    printf("Enter string:\n");
    gets(str);
    len = strlen(str);
    for (i = 0; i < len; i++)
        if (isupper(str[i]))
            up++;
        else if (islower(str[i]))
            low++;
        else if (isdigit(str[i]))
            digit++;
        else
            special++;
    printf("Total count of upper case characters is:%d\n", up);
    printf("Total count of lower case characters is:%d\n", low);
    printf("Total count of special characters is:%d\n", special);
    printf("Total count of digit is:%d\n", digit);
    return 0;
}
