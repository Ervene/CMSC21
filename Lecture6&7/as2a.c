#include <stdio.h>

int main(void){

//Display the arrays.
    int road_networks[8][8] = {
        {1, 1, 0, 0, 0, 1, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 1, 0, 0},
        {1, 0, 0, 1, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 1, 0, 1},
    };
    char points[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
// Display the points as column titles.
    for (int i = 0; i < 8; i++)
    {
        if (i == 0)
        {
            printf("\t");
        }
        if (i == 2 || i == 3)
        {
            printf("[%c]\t", points[i]);
        }
        else
        {
            printf("%c\t", points[i]);
        }
    }
    printf("\n");
// Display the rows and values of the 2D array.
    for (int i = 0; i < 8; i++)
    {

        if (i == 2 || i == 3)
        {
            printf("[%c]\t", points[i]);
        }
        else
        {
            printf("%c\t", points[i]);
        }
        for (int j = 0; j < 8; j++)
        {
            printf("%d\t", road_networks[i][j]);
        }
        printf("\n");
    }
//Ask the user to enter the point.
    int point;
    printf("Which point are you located? 0-A, 1-B, 2-C, 3-D, 4-E, 5-F, 6-G, 7-H :");
    scanf("%d", &point);
    printf("At point: %c\n", points[point]);

    for (int i = 0; point != 2 && point != 3; i++)
    {
        if (road_networks[point][i])
        {
            point = i;
            printf("Now at point: %c\n", points[point]);
        }
    }
    printf("Point:%c Arrived to the charging station\n", points[point]);
    return 0;
}

