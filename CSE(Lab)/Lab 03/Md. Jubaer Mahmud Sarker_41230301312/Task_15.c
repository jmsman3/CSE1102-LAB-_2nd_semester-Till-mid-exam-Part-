#include <stdio.h>
int main()
{
    double Cgpa;
    scanf("%lf", &Cgpa);
    int Creditt;
    scanf("%d", &Creditt);

    if (Creditt >= 30)
    {
        if (Cgpa >= 3.8)
        {
            if (Cgpa >= 3.80 && Cgpa <= 3.89)
            {
                printf("25 percent");
            }
            else if (Cgpa >= 3.90 && Cgpa <= 3.94)
            {
                printf("50 percent");
            }
            else if (Cgpa >= 3.95 && Cgpa <= 3.99)
            {
                printf("75 percent");
            }
            else if (Cgpa == 4.00)
            {
                printf("100 percent");
            }
        }
    }
    else
    {
        printf("The student is not eligible for a waiver");
    }

    return 0;
}