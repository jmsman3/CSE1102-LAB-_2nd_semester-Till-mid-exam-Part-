#include <stdio.h>
int main()
{

    int num;
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &num);
        sum += num;
        printf("%d\n", sum);
    }

    return 0;
}