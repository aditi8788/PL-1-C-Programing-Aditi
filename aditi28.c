/* Program 28: Factorial using a recursive user-defined function */
#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0 || n > 12)
    {
        printf("Please enter a number from 0 to 12.");
        return 0;
    }

    result = factorial(n);
    printf("Factorial of %d = %d", n, result);

    return 0;
}
