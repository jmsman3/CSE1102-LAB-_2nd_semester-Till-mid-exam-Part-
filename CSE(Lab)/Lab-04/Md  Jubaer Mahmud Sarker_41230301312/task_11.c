#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int cnt = 0;
    while (num != 0)
    {
        num = num / 10;
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}
