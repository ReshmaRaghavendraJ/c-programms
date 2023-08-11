#include <stdio.h>
#include <string.h>
int main()
{
    char str[300];
    int i, count = 0;
    printf("Enter the string:\n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
            count++;
    }
    printf("total count of word is:%d", count + 1);
    return 0;
}
