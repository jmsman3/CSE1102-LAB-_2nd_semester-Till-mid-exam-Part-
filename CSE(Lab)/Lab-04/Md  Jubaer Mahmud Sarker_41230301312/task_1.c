#include <stdio.h>
int main()
{ // 1) Sequence: 24, 18, 12, 6, 0, -6

    for (int i = 24; i >= -6; i = i - 6)
    {
        printf("%d", i);
        if (i != -6)
        {
            printf(",");
        }
    }

    // 2) Sequence: -10, -5, 0, 5, 10, 15, 20

    for (int i = -10; i <= 20; i = i + 5)
    {
        printf("%d", i);

        if (i != 20)
        {
            printf(",");
        }
    }

    // 3) Sequence:18, 27, 36, 45, 54, 63

    for (int i = 18; i <= 63; i = i + 9)
    {
        printf("%d", i);

        if (i != 63)
        {
            printf(",");
        }
    }

    // 4) Sequence:18, -27, 36, -45, 54, -63

    for (int i = 18; i <= 63; i = i + 9)
    {
        if (i == 27 || i == 45 || i == 63)
        {
            printf("-%d", i);
        }
        else
        {
            printf("%d", i);
        }

        if (i != 63)
        {
            printf(",");
        }
    }

    return 0;
}