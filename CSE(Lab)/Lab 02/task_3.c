#include <stdio.h>
int main()
{

    int x, y;
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        printf("First is greater");
    }
    else if (x < y)
    {
        printf("Second is greater");
    }
    else
    {
        printf("The numbers are equal ");
    }

    return 0;
}