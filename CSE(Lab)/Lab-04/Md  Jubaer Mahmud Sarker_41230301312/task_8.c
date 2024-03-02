#include <stdio.h>
int main()
{

    int num;
    scanf("%d", &num);
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {   
        if( i%7 ==0)
        sum += i ;
    }

    printf("%d", sum);

    return 0;
}