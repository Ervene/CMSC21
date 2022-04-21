#include <stdio.h>
int main(void)
{
//identify the variables.
    int ones ,tens, hundreds;
//ask the user to enter their 3-digit number.
    printf("Please enter a 3-digit number:");
    scanf("%1d%1d%1d", &hundreds, &tens, &ones);
//print to display the reverse of the 3-digit number.
    printf("reverse of your 3-digit number is: %d%d%d", ones, tens, hundreds);
    return 0;
}