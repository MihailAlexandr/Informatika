#include <stdio.h>
#include <math.h>

int main()
{
    double x, a, Y, G, F;

    printf("Enter x:");
    scanf("%lf", &x);
    printf("Enter a:");
    scanf("%lf", &a);

    G = (-7*(4*pow(a, 2)+15*a*x-4*pow(x, 2)))/(-45*pow(a, 2)+26*a*x+7*pow(x, 2));
    printf("G=%f\n", G);

    printf("Enter x:");
    scanf("%lf", &x);
    printf("Enter a:");
    scanf("%lf", &a);

    F = pow(2, (40 * pow(a, 2) - 107 * a * x + 63 * pow(x, 2)));
    printf("F=%f\n", F);

    printf("Enter x:");
    scanf("%lf", &x);
    printf("Enter a:");
    scanf("%lf", &a);

    Y = log(-pow(a, 2) - 2 * a * x + 3 * pow(x, 2) + 1);
    printf("Y=%f\n", Y);


    return 0;
}