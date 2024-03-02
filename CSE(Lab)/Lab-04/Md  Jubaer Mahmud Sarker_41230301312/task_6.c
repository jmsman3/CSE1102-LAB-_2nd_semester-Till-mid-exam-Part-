#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    
    int sum = 0;
    for (int i = 1; i <= num; i = i + 1)
    {
        if (i % 2 == 0)
        {
            sum -= i * i;
        }
        else 
        {
            sum += i * i;
        }
    }

    printf("%d", sum);

    return 0;
}