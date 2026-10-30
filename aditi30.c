/* Program 30: Area of a triangle - Arguments, no return value */
#include <stdio.h>

void areaTriangle(float base, float height)
{
    float area;

    area = 0.5f * base * height;
    printf("Area of Triangle = %f", area);
}

int main()
{
    float b, h;

    printf("Enter base: ");
    scanf("%f", &b);

    printf("Enter height: ");
    scanf("%f", &h);

    areaTriangle(b, h);

    return 0;
}
