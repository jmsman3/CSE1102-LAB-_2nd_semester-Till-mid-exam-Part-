#include <stdio.h>
int main()
{
    int canvas_num;
    scanf("%d", &canvas_num);

    int tube_num;
    scanf("%d", &tube_num);

    int Previous_total = (canvas_num * 120) + (tube_num * 75);
    printf(" Previous_t  otal:- %d\n ", Previous_total);

    if (Previous_total >= 0 && Previous_total <= 299)
    {
        int after_discount = Previous_total - 0;
        printf("New total after discount:-%d", after_discount);
    }
    else if (Previous_total >= 300 && Previous_total <= 499)
    {
        int after_discount = Previous_total - 10;
        printf("New total after discount:- %d", after_discount);
    }
    else if (Previous_total >= 500 && Previous_total <= 749)
    {
        int after_discount = Previous_total - 20;
        printf("New total after discount:- %d", after_discount);
    }
    else if (Previous_total >= 750 && Previous_total <= 999)
    {
        int after_discount = Previous_total - 50;
        printf("New total after discount:- %d", after_discount);
    }
    else
    {
        int after_discount = Previous_total - 150;
        printf("New total after discount:-%d", after_discount);
    }

    return 0;
}