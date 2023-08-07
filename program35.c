#include <stdio.h>
int main()
{
    const float PI = 3.14;
    int r = 60;
    float area;
    area = (float)(PI * r * r);
    printf("The area of circle is:%.2f", area);
    return 0;
}
