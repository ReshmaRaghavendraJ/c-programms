#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    int a = 200;
    fp = fopen("E:/RESHMA/num.txt", "w");
    fprintf(fp, "%d", a);
    fclose(fp);
    return 0;
}
