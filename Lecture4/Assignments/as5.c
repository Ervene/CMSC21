#include <stdio.h>
int main(void)
{
    int start_day, days, weekday;

    printf("Enter number of days in month: ");
    scanf("%d", &days);


    printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);
    printf("Sun Mon Tue Wed Thu Fri Sat\n");

    for (weekday = 0; weekday < start_day; weekday++){
        printf(" ");
    }
    for (int daycount = 1; daycount <= days; daycount++){
        if (weekday > 6){
            printf("\n");
            weekday = 1;
        }else{
            weekday++;
        }
        printf("%3d", daycount);
    }
        return 0;
}


for (weekday = 1; weekday < start_day; weekday++){
        printf("  ");
    }
    for (int daycount = 1; daycount <= days; daycount++){
        if (weekday > 6){
            weekday = 1;
            printf("\n");
        }else{
            weekday++;
        }
        printf("%3d", daycount);

 for (start_day = 1; start_day <= days; start_day++){
            printf("%5d",day);

        if(++weekDay>6){
            printf("\n");
            weekDay=0;
        }
        start_day=weekday;
    }
        return 0;
}

