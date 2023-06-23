3 //read and print an array using function
#include <stdio.h>
#include <stdlib.h>
void readar(int[], int);
void printar(int[], int);
int main()
{
    int n = 5, i;
    // printf("Enter the size:");
    // scanf("%d", &n);
    int a[n], b[n], c[n];

    readar(a, n);
    readar(b, n);

    for (i = 0; i < n; i++)
        c[i] = a[i] + b[i];

    printar(a, n);
    printar(b, n);
    printar(c, n);

    return 0;
}
void readar(int num[], int size)
{
    int i;
    printf("Enter Array Elements:\n");
    for (i = 0; i < size; i++)
        scanf("%d", &num[i]);
}

void printar(int num[], int size)
{
    int i;
    printf("Array is:\n");
    for (i = 0; i < size; i++)
        printf("%d\t", num[i]);
    printf("\n");
}
