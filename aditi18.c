/*
Program 18: Accept integer, float, and character arrays from the user
and display each element with its memory address using for, while,
and do-while loops.
*/

#include <stdio.h>

int main(void)
{
    int var1[5], i = 0, j = 0, k = 0;
    float var2[5];
    char var3[5];

    for (i = 0; i < 5; i++)
    {
        printf("Enter integer value for index %d: ", i);
        scanf("%d", &var1[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("var1[%d] = %d, address = %p\n",
               i, var1[i], (void *)&var1[i]);
    }

    j = 0;
    while (j < 5)
    {
        printf("Enter float value for index %d: ", j);
        scanf("%f", &var2[j]);
        j++;
    }

    j = 0;
    while (j < 5)
    {
        printf("var2[%d] = %.6f, address = %p\n",
               j, var2[j], (void *)&var2[j]);
        j++;
    }

    k = 0;
    do
    {
        printf("Enter character for index %d: ", k);
        scanf(" %c", &var3[k]);
        k++;
    } while (k < 5);

    k = 0;
    do
    {
        printf("var3[%d] = %c, address = %p\n",
               k, var3[k], (void *)&var3[k]);
        k++;
    } while (k < 5);

    return 0;
}
