#include <stdio.h>
int main(void)
{
    int i;
//A. while loop
    i = 10;
    while (i < 10)
    {
        printf("%d", i);
        i++;
    }
    printf("\n");
//B. for loop
    i = 10;
    for (; i < 10;)
    {
        printf("%d", i);
        i++;
    }
    printf("\n");
//C. do-while loop
    i = 10;
    do
    {
        printf("%d", i);
        i++;
    } while (i < 10);
    printf("\n");
    return 0;
}



