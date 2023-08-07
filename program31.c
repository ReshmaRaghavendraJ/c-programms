#include <stdio.h>
#include <stdlib.h>
struct contact
{
    char ph[20];
    char name[20];
};

int main()
{
    struct contact c;
    FILE *fp;
    int n, i;
    fp = fopen("E:/RESHMA/f1.txt", "r");
    fseek(fp, 0, 2);
    n = ftell(fp) / sizeof(c);
    fseek(fp, 0, 0);
    for (i = 1; i <= n; i++)
    {
        fread(&c, sizeof(c), 1, fp);
        printf("%s\t%s\n", c.ph, c.name);
    }
    fclose(fp);
}
