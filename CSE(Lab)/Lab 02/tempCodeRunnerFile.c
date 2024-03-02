#include <stdio.h>
int main()
{

    int s;
    scanf("%d", &s);
    float L;
    if (s >= 100)
    {
        L = 12000 / (4 + (s * s) / 14900.0);
    }
    else if (s < 100)
    {
        L = 3000 - 125 * s * s;
    }
    printf("%f", L);

    return 0;
}