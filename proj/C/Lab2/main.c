#include <stdio.h>
#include <math.h>

int main(void) {
    double x, a, G, F, Y;
    int n;


    printf("Formula #1 G = (-7*(4*pow(a, 2)+15*a*x-4*pow(x, 2)))/(-45*pow(a, 2)+26*a*x+7*pow(x, 2))\n");
    printf("Formula #2 F = pow(2, (40 * pow(a, 2) - 107 * a * x + 63 * pow(x, 2)))\n");
    printf("Formula #3 Y = log(-pow(a, 2) - 2 * a * x + 3 * pow(x, 2) + 1)\n");
    printf("Choose the formula:");
    scanf("%d", &n);
    printf("Enter x:");
    scanf("%lf", &x);
    printf("Enter a:");
    scanf("%lf", &a);


    switch (n) {


        case 1:
            G = (-7 * (4 * pow(a, 2) + 15 * a * x - 4 * pow(x, 2))) /
                (-45 * pow(a, 2) + 26 * a * x + 7 * pow(x, 2));
            printf("G = %lf\n", G);
            break;

        case 2:

            F = pow(2, (40 * pow(a, 2) - 107 * a * x + 63 * pow(x, 2)));
            printf("F = %lf\n", F);


            break;


        case 3:

            Y = log(-pow(a, 2) - 2 * a * x + 3 * pow(x, 2) + 1);
            printf("Y = %lf\n", Y);


    break;

    default:
        printf("Error 404\n");


            }



    return 0;


    }

