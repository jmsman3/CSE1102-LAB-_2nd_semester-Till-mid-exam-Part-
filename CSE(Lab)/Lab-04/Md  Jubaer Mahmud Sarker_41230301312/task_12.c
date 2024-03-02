#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    int cnt = 0;
    while (number != 0)
    {
        int digit = number / 10;
        cnt++;

        int divisor = pow(10, cnt - 1);
        int res = number / divisor;
        printf("%d ", res);
        number = number % divisor;
        // divisor = divisor / 10;
    }

    return 0;
}
