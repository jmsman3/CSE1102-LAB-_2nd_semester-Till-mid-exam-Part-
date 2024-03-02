
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d ", &a, &b, &c);
    double d;
    scanf("%lf", &d);

    int a_to_c = pow(a, c);
    double doublee = d / 3.0;

    int formulaa = a_to_c + b * a - doublee;
    int final_formula = ((int)formulaa);
    printf(" %d", final_formula);

    return 0;
}


