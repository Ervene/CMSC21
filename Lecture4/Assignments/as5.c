#include<stdio.h>
int main(void)
{
//identify the variables.
    int day,start_day,DaysInMonth,dt=1;

    do
    {
//ask the user to enter number of days in month.
        printf("Enter number of days in month: ");
        scanf("%d", &DaysInMonth);
        if ( DaysInMonth< 28 ||DaysInMonth  > 31)
        {
            printf("Invalid input! Choose between 28 and 31.\n");
        }
    } while (DaysInMonth < 28 || DaysInMonth> 31);

    do
    {
//ask to user to enter the starting day of the week (1=Mon, 7=Sun).
        printf("Enter the starting day of the week (1=Mon, 7=Sun): ");
        scanf("%d", &start_day);
        if (start_day < 1 || start_day > 7)
        {
            printf("Invalid input! Choose between 1 and 7.\n");
        }
    } while (start_day < 1 || start_day > 7);
//show the days in a week.
    printf("\nMon \tTue \tWed \tThu \tFri \tSat \tSun \n");
    printf(" _________________________________________________\n\n");

    for(day=start_day;day>1;day--)
    {
        printf("\t");
    }

    while(dt<=DaysInMonth)
    {
        if(start_day!=0)
        {
         if(start_day%7==0)
         printf("\n");
        }

    printf("%d\t",dt);
        dt++;
        start_day++;
    }
    return 0;
}

