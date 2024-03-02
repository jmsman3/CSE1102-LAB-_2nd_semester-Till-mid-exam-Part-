#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 63; i <= 600; i = i + 63)
    {

        sum = sum + i;
    }

    printf("%d", sum);

    return 0;
}