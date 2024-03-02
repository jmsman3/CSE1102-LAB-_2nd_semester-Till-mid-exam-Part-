#include <stdio.h>
int main()
{
    int nums;
    int sum = 0;
    int cnt = 0;
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &nums);
        if (nums % 2 != 0)
        {
            sum += nums;
            cnt++;
        }
    }

    if (cnt > 0)
    {
        printf("Total is:- %d\n", sum);
        double Averge_numbers = sum / cnt;
        printf("Averg holo:- %0.1f", Averge_numbers);
    }

    return 0;
}