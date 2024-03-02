#include <stdio.h>
int main()
{

    double dis_memter;
    scanf("%lf", &dis_memter);

    double dis_time_Secondd;
    scanf("%lf", &dis_time_Secondd);

    double kilo_per_hour = dis_memter / 1000.0;
    double kilo_per_secondd = dis_time_Secondd / 3600.0;

    double kilo_per_hr = kilo_per_hour / kilo_per_secondd;
    printf("%0.1lf\n", kilo_per_hr);

    if (kilo_per_hr < 60)
    {
        printf("Too slow. Needs more changes.");
    }
    else if (kilo_per_hr >= 60 && kilo_per_hr <= 90)
    {
        printf(" Velocity is okay. The car is ready!");
    }
    else if (kilo_per_hr > 90)
    {
        printf("Too fast. Only a few changes should suffice. ");
    }

    return 0;
}