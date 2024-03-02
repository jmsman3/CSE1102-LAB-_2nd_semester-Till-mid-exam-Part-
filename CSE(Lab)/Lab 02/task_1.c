#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int Sum = x + y;
    int Product = x * y;
    int Difference = x - y;
    printf("Sum = %d\n", Sum);
    printf("Product = %d\n", Product);
    printf("Difference = %d\n", Difference);

    return 0;
}