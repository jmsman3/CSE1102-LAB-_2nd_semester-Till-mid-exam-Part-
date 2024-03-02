#include <stdio.h>
int main()
{

    float  x;
    scanf("%f", &x);
    float area = 3.1416 * x * x;
    float poridhi = 2 * 3.1416 * x;
    printf("Area is %f\n", area);
    printf("Circumference is %f", poridhi);

    return 0;
}