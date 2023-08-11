#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char name[30], temp[30];
    printf("Enter String:\n");
    gets(name);
    strcpy(temp, name);
    strrev(name);
    if (stricmp(name, temp) == 0)
        printf("It is Palindrome");
    else
        printf("It is not a palindrome");
    return 0;
}
