#include <stdio.h>
int main()
{
    const float PI = 3.14;
    int r = 60, l = 20, b = 15, h = 8, s = 5;
    float aoc, aot, aor, aos, circumofcircle;
    aoc = (float)(PI * r * r);
    aot = (float)(0.5 * b * h);
    aor = (float)(l * b);
    aos = (s * s);
    circumofcircle = (float)(2 * PI * r);
    printf("The area of circle is:%.2f\n", aoc);
    printf("The area of triangle is:%.2f\n", aot);
    printf("The area of rectangle is:%.2f\n", aor);
    printf("The area of square is:%.2f\n", aos);
    printf("The Circumference of a circle is:%.2f\n", circumofcircle);
    return 0;
}
