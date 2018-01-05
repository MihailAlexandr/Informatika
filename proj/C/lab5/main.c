#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define nin 255

int main ()
{
    double a , x , min, max, min_x , max_x , delitel, mas[nin];
    int i, step,n, calc=0;
    char min_s[nin], max_s[nin], step_s[nin], a_s[nin], buffer[nin], result[nin]={0}, temp[nin], *inp;

    printf ("Formula #1 G = (-7*(4*pow(a, 2)+15*a*x-4*pow(x, 2)))/(-45*pow(a, 2)+26*a*x+7*pow(x, 2))\n");
    printf ("Formula #2 F = pow(2, (40 * pow(a, 2) - 107 * a * x + 63 * pow(x, 2)))\n");
    printf ("Formula #3 Y = log(-pow(a, 2) - 2 * a * x + 3 * pow(x, 2) + 1)\n");
    printf ("Enter 4 for exit");
    scanf ("%d" , &n);
    while (n<0)
    {
    printf("Repit");
    scanf("%d", &n);
    }
        while (n > 0 && n < 4)
    {
        printf ("Enter а:");
        scanf ("%s" , &a_s);
        printf ("Enter х:\not");
        scanf ("%s" , &min_s);
        printf ("do:");
        scanf ("%s" , &max_s);
        printf ("enter steps:");
        scanf ("%s" , &step_s);

        /*Преобразование строк в числа*/
        a = atof(a_s);
        min_x = atof(min_s);
        max_x = atof(max_s);
        step = atoi(step_s);
        while (step > nin)
        {
            printf("steps not can be more then 255, Enter steps:");
            scanf("%s", &step_s);
            step=atoi(step_s);
        }
        switch (n)
        {
            case 1:
                printf ("Вычисление G\n");
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
                printf ("Вычисление F\n");
                for (x = min_x, i=0 ; x <= max_x ; x+= (max_x - min_x) / (step - 1), i++)
                {
                    printf ("\nx=%.3lf\t" , x);
                    mas[i] = pow(2 , (40 * pow(a , 2) - 107 * a * x + 63 * pow(x , 2)));
                    printf ("F=%.3lf\n", mas[i]);
                }
                break;

            case 3:
                printf ("Вычисление Y\n");
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
        /*перезапись массива чисел в строку*/
        for (i=0;i<step; i++)
        {
            sprintf(buffer, "%.3lf", mas[i]);
            strcat(result, buffer);
        }

        printf("String:%s\n", result);
        printf("Шаблон:");             /*Ввод шаблона*/
        scanf("%s", temp);
        inp = strstr(result, temp);
        while(inp)                     /*Расчёт шаблона*/
        {
            sprintf(result, inp +1);
            calc++;
            inp=strstr(result, temp);
        }
        printf("Кол-во совпадений:%d\n", calc);
        printf("***************************************************************************************\n\n");

    printf ("Formula #1 G = (-7*(4*pow(a, 2)+15*a*x-4*pow(x, 2)))/(-45*pow(a, 2)+26*a*x+7*pow(x, 2))\n");
    printf ("Formula #2 F = pow(2, (40 * pow(a, 2) - 107 * a * x + 63 * pow(x, 2)))\n");
    printf ("Formula #3 Y = log(-pow(a, 2) - 2 * a * x + 3 * pow(x, 2) + 1)\n");
    printf ("Enter 4 for exit");
    scanf ("%d" , &n);
}
    return 0;
}

