#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char name[30];
    int i;
    printf("Enter string name:\n");
    gets(name);
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 'A' || name[i] == 'a')
            name[i] = name[i] + 8;
    }
    printf("After replace:%s", name);
    return 0;
}
