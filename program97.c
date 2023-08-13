#include <stdio.h>
#include <conio.h>
#include <string.h>
struct names
{
    char name[30];
};
int main()
{
    struct names e[20];
    struct names temp;
    int i, j, n;
    printf("Enter number of names we want:\n");
    scanf("%d", &n);
    printf("Enter names:\n");
    for (i = 0; i < n; i++)
    {
        gets(e[i].name);
    }
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (stricmp(e[i].name, e[j].name) > 0)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
    printf("After sorting :\n");
    for (i = 0; i < n; i++)
        printf("%s\t", e[i].name);
    return 0;
}
