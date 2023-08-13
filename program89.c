#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void read(int[], int);
void printsort(int[], int);
void printbinary(int[], int, int, int, int);

int main()
{
    int arr[50], i, j, n, temp;
    int mid, low, high, x;
    printf("Enter array size:\n");
    scanf("%d", &n);
    read(arr, n);
    printsort(arr, n);
    printbinary(arr, n, mid, low, high);
    return 0;
}

void read(int a[], int n)
{
    int i;
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

void printsort(int a[], int n)
{
    int i, j, temp;
    printf("Sorted array elements are:\n"); // Selection Sort till here
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("%d\n", a[i]);
    }
}

void printbinary(int a[], int n, int mid, int low, int high)
{
    int x;
    printf("Enter the number to be search:\n");
    scanf("%d", &x);
    low = 0;
    high = n - 1;
    do
    {
        mid = (low + high) / 2;
        if (a[mid] == x)
  {
                printf("Number found at position %d\n", mid);
            return 0;
        }
        if (a[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    } while (low <= high);
    printf("element not found\n");
}
