#include <stdio.h>

int main()
{
    int a, b, temp;

    a = 111;
    b = 222;

    printf("\nBefore swapping:");
    printf("\na = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping:");
    printf("\na = %d, b = %d\n", a, b);

    return 0;
}
