/* Program 25: Factorial using a user-defined function and for loop */
#include <stdio.h>

int factorial(int n)
{
    int fact = 1, i;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
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
