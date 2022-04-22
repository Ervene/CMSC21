#include <stdio.h>
int main(void)
{
//identify the variables.
    int base = 2, exponent, power = 1;
//ask the user to enter the exponent.
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    printf("%d^%d = ", base, exponent);
//solve for the power of two.
    for (; exponent > 0; exponent--)
    {
        power *= base;
    }
    printf("%d\n", power);
    return 0;
}

