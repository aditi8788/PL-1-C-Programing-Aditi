#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("\nEnter first number: ");
    scanf("%d", &a);

    printf("\nEnter second number: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping:\n");
    printf("\nFirst number = %d", a);
    printf("\nSecond number = %d\n", b);

    return 0;
}
