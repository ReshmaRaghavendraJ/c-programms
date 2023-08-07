#include <stdio.h>
#include <stdlib.h>
struct contact
{
    char ph[20];
    char name[30];
};

int main()
{
    struct contact c;
    FILE *fp;
    fp = fopen("E:/RESHMA/f1.txt", "a");
    printf("Enter the phone number and name:\n");
    gets(c.ph);
    gets(c.name);
    fwrite(&c, sizeof(c), 1, fp);
    fclose(fp);
    return 0;
}
