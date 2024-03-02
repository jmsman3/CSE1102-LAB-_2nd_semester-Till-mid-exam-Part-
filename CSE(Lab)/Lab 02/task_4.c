#include <stdio.h>
int main()
{

    int x, y;
    scanf("%d %d", &x, &y);
    int Beyog;

    if (x > y)
    {
        Beyog = x-y;
    }
    else if (x < y)
    {
        Beyog = y-x;
    }
    else
    {
        Beyog = x - y;
    }
    printf("%d" , Beyog);

    return 0;
}