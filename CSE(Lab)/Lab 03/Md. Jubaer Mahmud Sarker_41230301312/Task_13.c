#include <stdio.h>
int main()
{
    int markss;
    scanf("%d", &markss);

    if (markss >= 0 && markss <= 100)
    {
        if (markss >= 90)
        {
            printf("Tomar Grade is :- A");
        }
        else if (markss >= 80 && markss <= 89)
        {
            printf("Tomar Grade is :- B");
        }
        else if (markss >= 70 && markss <= 79)
        {
            printf("Tomar Grade is :- C");
        }
        else if (markss >= 60 && markss <= 69)
        {
            printf("Tomar Grade is :- D");
        }
        else if (markss >= 50 && markss <= 59)
        {
            printf("Tomar Grade is :- E");
        }
        else if (markss < 50)
        {
            printf("Congratulation - Tumi FAIL korso");
        }
    }
    else 
    {
         printf("Invali marks");
    }
    return 0;
}