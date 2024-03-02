#include <stdio.h>
int main()
{
    int faren_height;
    scanf("%d", &faren_height);

    double Selcious = (faren_height - 32) * 0.56;

    printf("%0.2f degrees C\n", Selcious);

    if (Selcious < 20)
    {
        printf("Winter");
    }
    else if (Selcious >= 20 && Selcious <= 25)
    {
        printf("Autumn");
    }
    else if (Selcious > 25 && Selcious < 30)
    {
        printf("Spring");
    }
    else if (Selcious >= 30)
    {
        printf("Summer");
    }

    return 0;
}