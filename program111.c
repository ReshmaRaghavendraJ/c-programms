#include <stdio.h>
void fibbonacci(int);
int main()
{
    int n;
    printf("Enter number:\n");
    scanf("%d", &n);
    fibbonacci(n);
    return 0;
}
void fibbonacci(int n)
{
    int n1 = 0, n2 = 1, i, temp;
    printf("%d\t%d\t", n1, n2);
    for (i = 1; i <= n; i++)
    {
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        printf("%d\t", temp);
    }
}
