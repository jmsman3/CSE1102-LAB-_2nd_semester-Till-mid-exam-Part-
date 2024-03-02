#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x % 2 == 0 && x % 5 == 0)
    {

        printf("NO");
    }
    else
    {
        printf("%d", x);
    }

    return 0;
}