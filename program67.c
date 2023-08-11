#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    int i, count1 = 0, count2 = 0;
    printf("Enter name:\n");
    gets(name);
    for (i = 0; name[i] != 0; i++)
        switch (name[i])
        {
        case 'a':
            count1++;

            break;
        case 'e':
            count1++;

            break;
        case 'i':
            count1++;

            break;
        case 'o':
            count1++;

            break;
        case 'u':
            count1++;

            break;
        default:
            count2++;

            break;
        }
    printf("Total count of Vowel is: %d\n", count1);
    printf("Total count of Consonants: %d\n", count2);
    return 0;
}
