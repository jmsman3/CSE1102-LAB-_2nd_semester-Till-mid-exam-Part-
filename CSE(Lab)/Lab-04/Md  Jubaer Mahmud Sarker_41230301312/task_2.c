#include <stdio.h>
int main()
{
    char carrName[100];
    scanf("%s", carrName);

    int car_num;
    scanf("%d", &car_num);

    for (int i = 0; i < car_num; i++)
    {
        printf("%s\n", carrName);
    }

    return 0;
}