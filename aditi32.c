/* Program 32: Area of a triangle - Arguments, returns a value */
#include <stdio.h>

float areaTriangle(float base, float height)
{
    return 0.5f * base * height;
}

int main()
{
    float base, height, area;

    printf("Enter base: ");
    scanf("%f", &base);

    printf("Enter height: ");
    scanf("%f", &height);

    area = areaTriangle(base, height);
    printf("Area of Triangle = %f", area);

    return 0;
}
