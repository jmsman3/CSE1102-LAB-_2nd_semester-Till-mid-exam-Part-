#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 600; i = i + 1)
    {
        if ((i % 7 == 0 && i % 9 != 0) || (i % 7 != 0 && i % 9 == 0))
        {
            sum = sum + i;
        }
    }

    printf("%d ", sum);

    return 0;
}