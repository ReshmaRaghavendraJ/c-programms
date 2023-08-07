#include <stdio.h>
void interest(int, int, int);
int main()
{
    int principal, time, rate;
    printf("Enter the principal,time and rate\n");
    scanf("%d%d%d", &principal, &time, &rate);
    interest(principal, time, rate);
    return 0;
}
void interest(int p, int t, int r)
{
    float si;
    si = (float)(p * t * r) / (100);
    printf("Simple Interest is: %.2f\n", si);
}
