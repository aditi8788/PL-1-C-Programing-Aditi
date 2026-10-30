/* Program 27: Factorial using a user-defined function and do-while loop */
#include <stdio.h>

int factorial(int n)
{
    int fact = 1, i = 1;

    if (n == 0)
        return 1;

    do
    {
        fact = fact * i;
        i++;
    } while (i <= n);

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
