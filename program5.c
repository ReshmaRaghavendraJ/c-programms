#include <stdio.h>
#include <stdlib.h>
void sortarr(int[], int);
void printarr(int[], int);

int main()
{
    int i;
    int a[] = {10, 50, 2, 13};
    int b[] = {25, 6, 49, 7, 1};
    int c[] = {2, 9, 125, 0, 63, 2};
    sortarr(a, 4);
    sortarr(b, 5);
    sortarr(c, 6);

    printarr(a, 4);
    printarr(b, 5);
    printarr(c, 6);

    return 0;
}

void sortarr(int num[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
            if (num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
    }
}

void printarr(int n[], int s)
{
    int i;
    for (i = 0; i < s; i++)
        printf("%d\t", n[i]);
    printf("\n");
}
