#include <stdio.h>
#include <math.h>

int main () {
    double a , x , G , F , Y;
    int n = 0;
    int i;
    printf ("Формула #1 G\n");
    printf ("Формула #2 F\n");
    printf ("Формула #3 Y\n");
    printf ("Нажмите 4 для выхода");
    scanf ("%d" , &n);

    while (n > 0 && n < 4) {
        double min_x , max_x , delitel, zet;
        int    step;
        double min_znach=100;
        double max_znach=0;
        double array[i];
        printf ("Введите а:");
        scanf ("%lf" , &a);
        printf ("Границы измерения х:\nот");
        scanf ("%lf" , &min_x);
        printf ("до:");
        scanf ("%lf" , &max_x);
        while (min_x >= max_x) {
            printf ("верхняя граница должна быть больше нижнейю\n до:");
            scanf ("%lf" , &max_x);
        }
        printf ("введите кол-во шагов:");
        scanf ("%d" , &step);

        switch (n) {
            case 1:
                printf ("вычисление G\n");
                delitel = ((- 45 * pow (a , 2)) + (26 * a * x) + (7 * pow (x , 2)));
                if (delitel == 0) {
                    printf ("Ошибка\n");
                    array[i]=0;
                    continue;
                }
                else {
                    for (x = min_x, i=0 ; x <= max_x && i<=step ; x += (max_x - min_x) / (step - 1), i++) {
                        printf ("\nx=%.3lf\t" , x);
                        G = (- 7 * ((4 * pow (a , 2)) + (15 * a * x) - (4 * pow (x , 2)))) / delitel;
                        array[i]=G;
                        printf ("G=%.3lf\n" , G);
                        if (min_znach>array[i]) {
                            min_znach = array[i];
                        }
                        if(max_znach<array[i]) {
                            max_znach = array[i];
                        }
                    }
                    printf ("\nMin array=%.3lf  Max array=%.3lf\n\n", min_znach, max_znach);
                }

                break;

            case 2:
                printf ("вычисление F\n");
                for (x = min_x, i=0 ; x <= max_x && i<=step ; x += (max_x - min_x) / (step - 1), i++) {
                    zet=(40 * pow (a , 2) - 107 * a * x + 63 * pow (x , 2));
                    printf ("\nx=%lf\t" , x);
                    F = pow (2 , zet);
                    array[i]=F;
                    printf ("F=%lf\n", F);
                    if (min_znach>array[i]) {
                        min_znach = array[i];
                    }
                    if (max_znach<array[i]){
                        max_znach=array[i];
                    }
                }
                printf ("\nMin array=%.3lf  Max array=%.3lf\n\n", min_znach, max_znach);

                break;

            case 3:
                printf ("вычисление Y\n");
                for (x = min_x, i=0 ; x <= max_x && i<=step ; x += (max_x - min_x) / (step - 1), i++) {
                    printf ("\nx=%.3lf\t" , x);
                    Y = log (- pow (a , 2) - 2 * a * x + 3 * pow (x , 2) + 1);
                    array[i]=Y;
                    printf ("Y=%.3lf\n" , Y);
                    if (min_znach>array[i]) {
                        min_znach = array[i];
                    }
                    if(max_znach<array[i]) {
                        max_znach = array[i];
                    }
                }
                printf ("\nMin array=%.3lf  Max array=%.3lf\n\n", min_znach, max_znach);
                break;

            case 4:
                break;

            default:
                printf ("WTF");
        }
        printf ("Формула #1 G = (-7*(4*pow(a, 2)+15*a*x-4*pow(x, 2)))/(-45*pow(a, 2)+26*a*x+7*pow(x, 2))\n");
        printf ("Формула #2 F = pow(2, (40 * pow(a, 2) - 107 * a * x + 63 * pow(x, 2)))\n");
        printf ("Формула #3 Y = log(-pow(a, 2) - 2 * a * x + 3 * pow(x, 2) + 1)\n");
        printf ("Нажмите 4 для выхода");
        scanf ("%d" , &n);
    }
    return 0;
}