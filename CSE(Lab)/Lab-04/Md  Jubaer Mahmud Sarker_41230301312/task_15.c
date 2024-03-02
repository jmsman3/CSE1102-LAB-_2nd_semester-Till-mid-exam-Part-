#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    int cnt = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            cnt++;
        }
    }

    if (cnt == 2)
    {

        printf("%d is  a Prime number", number);
    }
    else
    {
        printf("%d is not a Prime number", number);
    }

    return 0;
}
