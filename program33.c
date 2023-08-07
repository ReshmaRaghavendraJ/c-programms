#include <stdio.h>
#include <math.h>
void totalprice(float, float);
int main()
{
    float unit, qty;
    printf("Enter the value of unit and quantity:\n");
    scanf("%f%f", &unit, &qty);
    totalprice(unit, qty);
    return 0;
}
void totalprice(float u, float q)
{
    float t;
    t = (u * q);
    printf("The total amount is:%f\n", t);
}
