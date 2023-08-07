#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n;
    FILE *fp;
    fp = fopen("E:/RESHMA/table.txt", "a");
    printf("Enter the number for Tables:\n");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
        fprintf(fp, "%d x %d = %d\n", n, i, n * i);
    fclose(fp);
    return 0;
}
