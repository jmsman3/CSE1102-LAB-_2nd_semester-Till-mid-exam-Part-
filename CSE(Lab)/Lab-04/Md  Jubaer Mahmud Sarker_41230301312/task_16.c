#include <stdio.h>
#include <limits.h>

int main()
{
    int quantity;
    scanf("%d", &quantity);
    int min = INT_MAX;
    int max = INT_MIN;
    int sum = 0;
    for (int i = 1; i <= quantity; i++)
    {

        int num;
        scanf("%d", &num);
        if (num < min)
            min = num;
        if (num > max)
            max = num;
        sum = sum + num;
    }

    float avrg = (float)sum / quantity;
    printf("Maximum %d\n", max);
    printf("Minimum %d\n", min);
    printf("avrg %.2lf\n", avrg);

    return 0;
}
