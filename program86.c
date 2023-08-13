#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void read(int[], int);
void logic(int[], int);
void logic();
int main()
{
    int arr[50], i, n, x;
    printf("Enter the size:\n");
    scanf("%d", &n);
    read(arr, n);
    logic(arr, n);
    return 0;
}

void read(int a[], int n)
{
    int x, i;
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the number to be search:\n");
    scanf("%d", &x);
}

void logic(int a[], int n)
{
    int i, x;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("number found at position :%d\n", i);
            break;
        }
    }
    if (i == n)
        printf("Number not found\n");
}
