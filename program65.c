#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    int i;
    printf("enter the string:\n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        str[i] = str[i] + 32;
    }
    printf("%s\n", str);
    return 0;
}
