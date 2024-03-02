#include <stdio.h>
int main()
{
    
    for (int i = 10; i <= 50; i = i + 1)
    {
        if( i %2 != 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}