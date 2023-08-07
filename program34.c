#include <stdio.h>
void meterread(int, int, float);
int main()
{
    int curtmeter, prevmeter;
    float rate;
    printf("Enter the current, previous meter reading and rate:\n");
    scanf("%d%d%f", &curtmeter, &prevmeter, &rate);
    meterread(curtmeter, prevmeter, rate);
    return 0;
}
void meterread(int cm, int pm, float r)
{
    float total;
    total = (float)((cm - pm) * r);
    printf("The total amount of meter reading is:%f", total);
}
