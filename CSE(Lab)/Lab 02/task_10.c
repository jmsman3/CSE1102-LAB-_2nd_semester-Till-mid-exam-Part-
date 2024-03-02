#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    int salary;
    if (x > 40 && x <= 168)
    {
        salary = 8000 + (x - 40) * 300;
        printf("%d", salary);
    }
    else if (x <= 40 && x > 0)
    {
        salary = x * 200;
        printf("%d", salary);
    }
    else if (x < 0)
    {
        printf("Hour cannot be negative");
    }
    else if (x > 168)
    {
        printf("Impossible to work more than 168 hours weekly ");
    }

    return 0;
}