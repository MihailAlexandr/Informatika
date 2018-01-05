#include <stdio.h>
#include <math.h>
#include <string.h>
#define nin 256

int main ()
{
    double a , x , min, max, min_x , max_x , delitel, up, down;
    int i, step,n;
    double mas[nin];

    printf ("Formula #1 G = (-7*(4*pow(a, 2)+15*a*x-4*pow(x, 2)))/(-45*pow(a, 2)+26*a*x+7*pow(x, 2))\n");
    printf ("Dormula #2 F = pow(2, (40 * pow(a, 2) - 107 * a * x + 63 * pow(x, 2)))\n");
    printf ("Formula #3 Y = log(-pow(a, 2) - 2 * a * x + 3 * pow(x, 2) + 1)\n");
    printf ("Enter 4 for exit");
    scanf ("%d" , &n);
    if (n==4)
    {
    printf("Repit");
    scanf("%d", &n);
    }
        while (n > 0 && n < 4)
    {
        printf ("Enter а:");
        scanf ("%lf" , &a);
        printf ("Enter х:\not");
        scanf ("%lf" , &min_x);
        printf ("do:");
        scanf ("%lf" , &max_x);
        while (min_x >= max_x)
        {
            printf ("verh > niz\n do:");
            scanf ("%lf" , &max_x);
        }
        printf ("enter steps:");
        scanf ("%d" , &step);
        if (step>nin)
        {
            printf("steps not can be more then 255, Enter steps:");
            scanf("%d", &step);
        }
        switch (n)
        {
            case 1:
                printf ("vichislenie G\n");
                memset (mas,0,sizeof(mas));
                delitel = ((- 45 * pow (a , 2)) + (26 * a * x) + (7 * pow (x , 2)));
                if (fabs(delitel) < 1e-06)
                {
                    printf ("error\n");
                    continue;
                }
                else
                {
                    for (x = min_x, i=0 ; x <= max_x; x+= (max_x - min_x) / (step - 1), i++)
                    {
                        printf ("\nx=%.3lf\t" , x);
                        mas[i] = (- 7 * ((4 * pow(a , 2)) + (15 * a * x) - (4 * pow(x , 2)))) / delitel;
                        printf ("G=%.3lf\n" , mas[i]);
                    }
                }
                break;

            case 2:
                printf ("vichislenie F\n");
                for (x = min_x, i=0 ; x <= max_x ; x+= (max_x - min_x) / (step - 1), i++)
                {
                    printf ("\nx=%.3lf\t" , x);
                    mas[i] = pow(2 , (40 * pow(a , 2) - 107 * a * x + 63 * pow(x , 2)));
                    printf ("F=%.3lf\n", mas[i]);
                }
                break;

            case 3:
                printf ("vichislenie Y\n");
                memset (mas,0,sizeof(mas));
                for (x = min_x, i=0 ; x <= max_x ; x+= (max_x - min_x) / (step - 1), i++)
                {
                    printf ("\nx=%.3lf\t" , x);
                    mas[i] = log(- pow(a , 2) - 2 * a * x + 3 * pow(x , 2) + 1);
                    printf ("Y=%.3lf\n" , mas[i]);
                }
                break;

            default:
                break;
        }
        
        for(i = 0, min = mas[0], max = mas[0]; i < step ; i++)
        {
            if(mas[i] > max)
                max = mas[i];
            if(mas[i] < min)
                min = mas[i];
        }
        printf ("min=%.3lf\tmax=%.3lf\n\n", min, max);

    printf ("Formula #1 G = (-7*(4*pow(a, 2)+15*a*x-4*pow(x, 2)))/(-45*pow(a, 2)+26*a*x+7*pow(x, 2))\n");
    printf ("Dormula #2 F = pow(2, (40 * pow(a, 2) - 107 * a * x + 63 * pow(x, 2)))\n");
    printf ("Formula #3 Y = log(-pow(a, 2) - 2 * a * x + 3 * pow(x, 2) + 1)\n");
    printf ("Enter 4 for exit");
    scanf ("%d" , &n);
}
    return 0;
}
