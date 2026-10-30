/* Program 31: Area of a triangle - No arguments, returns a value */
#include <stdio.h>

float areaTriangle()
{
    float base, height;

    printf("Enter base: ");
    scanf("%f", &base);

    printf("Enter height: ");
    scanf("%f", &height);

    return 0.5f * base * height;
}

int main()
{
    float area;

    area = areaTriangle();
    printf("Area of Triangle = %f", area);

    return 0;
}
