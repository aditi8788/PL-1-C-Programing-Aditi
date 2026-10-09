/*
Program 17: Display values and memory addresses of integer, float,
and character arrays without using loops.
*/

#include <stdio.h>

int main(void)
{
    int var1[5] = {10, 20, 30, 40, 50};
    float var2[5] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    char var3[5] = {'A', 'B', 'C', 'D', 'E'};

    printf("Integer array:\n");
    printf("var1[0] = %d, address = %p\n", var1[0], (void *)&var1[0]);
    printf("var1[1] = %d, address = %p\n", var1[1], (void *)&var1[1]);
    printf("var1[2] = %d, address = %p\n", var1[2], (void *)&var1[2]);
    printf("var1[3] = %d, address = %p\n", var1[3], (void *)&var1[3]);
    printf("var1[4] = %d, address = %p\n", var1[4], (void *)&var1[4]);

    printf("\nFloat array:\n");
    printf("var2[0] = %.6f, address = %p\n", var2[0], (void *)&var2[0]);
    printf("var2[1] = %.6f, address = %p\n", var2[1], (void *)&var2[1]);
    printf("var2[2] = %.6f, address = %p\n", var2[2], (void *)&var2[2]);
    printf("var2[3] = %.6f, address = %p\n", var2[3], (void *)&var2[3]);
    printf("var2[4] = %.6f, address = %p\n", var2[4], (void *)&var2[4]);

    printf("\nCharacter array:\n");
    printf("var3[0] = %c, address = %p\n", var3[0], (void *)&var3[0]);
    printf("var3[1] = %c, address = %p\n", var3[1], (void *)&var3[1]);
    printf("var3[2] = %c, address = %p\n", var3[2], (void *)&var3[2]);
    printf("var3[3] = %c, address = %p\n", var3[3], (void *)&var3[3]);
    printf("var3[4] = %c, address = %p\n", var3[4], (void *)&var3[4]);

    return 0;
}
