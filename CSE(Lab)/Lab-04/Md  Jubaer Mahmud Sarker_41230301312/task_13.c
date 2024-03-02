#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    printf("Divisor of Number %d\n", number);
    int cnt = 0;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("%d\n", i);
            cnt++;
        }
    }
    // printf("\n");

    printf("Total %d Divisors", cnt);
    return 0;
}
