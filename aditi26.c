/* Program 26: Factorial using a user-defined function and while loop */
#include <stdio.h>

int factorial(int n)
{
    int fact = 1, i = 1;

    while (i <= n)
    {
        fact = fact * i;
        i++;
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
