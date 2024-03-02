#include <stdio.h>
int main()
{

    int x;
    scanf("%d ", &x);

    if (x % 2 == 0 && x % 5 == 0)
    {
        printf("%d", x);
    }
    else
    {
        printf("Not multiple of 2 and 5 both ");
    }

    return 0;
}