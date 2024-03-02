#include <stdio.h>
int main()
{
    int hour;
    printf("Enter a number within 24 hours:-");
    scanf("%d", &hour);
    if (hour >= 0 && hour <= 23)
    {
        if (hour >= 4 && hour <= 6)
        {
            printf("Breakfast\n");
        }
        else if (hour >= 12 && hour <= 13)
        {
            printf("Lunch\n");
        }
        else if (hour >= 16 && hour <= 17)
        {
            printf(" Snacks\n");
        }
        else if (hour >= 19 && hour <= 20)
        {
            printf("Dinner\n");
        }
        else
        {
            printf("Patience is Virtue\n");
        }
    }
    else
    {
        printf("Wrong Time\n");
    }
    return 0;
}