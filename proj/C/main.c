#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define nin 255

struct masstruct
{
    double mas_G;
    double mas_F;
    double mas_Y;
}pt;
struct masstruct test[nin];

int main ()
{
    FILE *fwrite, *fread;

    double G1,F1,Y1;
    double a , x , min, max, min_x , max_x , delitel;
    int i, step, calc=0;
    char min_s[nin], max_s[nin], step_s[100], a_s[nin], buffer[nin]={0}, temp[nin], *inp, nyx[nin]={0};

    memset(buffer,0, sizeof(buffer));
    printf("Enter а:");
    scanf("%s", &a_s);
    printf("Enter х:\not");
    scanf("%s", &min_s);
    printf("do:");
    scanf("%s", &max_s);
    printf("enter steps:");
    scanf("%s", &step_s);

    /*Преобразование строк в числа*/
    a = atof(a_s);
    min_x = atof(min_s);
    max_x = atof(max_s);
    step = atoi(step_s);
    while (step > 100) {
        printf("steps not can be more then 100, Enter steps:");
        scanf("%s", &step_s);
        step = atoi(step_s);
    }

    printf("Вычисление G\n");
    for (x = min_x, i = 0; x <= max_x; x += (max_x - min_x) / (step - 1), i++) {
        delitel = ((-45 * pow(a, 2)) + (26 * a * x) + (7 * pow(x, 2)));
        if (fabs(delitel) < 1e-06) {
            printf("error\n");
            continue;
        }
        printf("\nx=%.3lf\t", x);
        test[i].mas_G = (-7 * ((4 * pow(a, 2)) + (15 * a * x) - (4 * pow(x, 2)))) / delitel;
        printf("G=%.3lf\n", test[i].mas_G);
        sprintf(buffer, "%.3lf", test[i].mas_G );
        strcat(nyx, buffer);
        if (i>nin) {
            printf("Массив переполнен");
            break;
        }
    }
    for (i = 0, min = test[0].mas_G, max = test[0].mas_G; i < step; i++) {
        if (test[i].mas_G > max)
            max = test[i].mas_G;
        if (test[i].mas_G < min)
            min = test[i].mas_G;
    }
    printf("min=%.3lf\tmax=%.3lf\n\n", min, max);
    printf("String:%s\n", nyx);
    printf("Шаблон:");             /*Ввод шаблона*/
    scanf("%s", temp);

    inp = strstr(nyx, temp);
    while (inp)                     /*Расчёт шаблона*/
    {
        sprintf(nyx, inp + 1);
        calc++;
        inp = strstr(nyx, temp);
    }
    printf("Кол-во совпадений:%d\n", calc);
    memset(nyx,0, sizeof(nyx));
    calc=0;
    printf("\n**************************************\n");

    printf("Вычисление F\n");
    for (x = min_x, i = 0; x <= max_x; x += (max_x - min_x) / (step - 1), i++) {
        printf("\nx=%.3lf\t", x);
        test[i].mas_F = pow(2, (40 * pow(a, 2) - 107 * a * x + 63 * pow(x, 2)));
        printf("F=%.3lf\n", test[i].mas_F);
        sprintf(buffer, "%.3lf", test[i].mas_F);
        strcat(nyx, buffer);
    }
    for (i = 0, min = test[0].mas_F, max = test[0].mas_F; i < step; i++) {
        if (test[i].mas_F > max)
            max = test[i].mas_F;
        if (test[i].mas_F < min)
            min = test[i].mas_F;
    }
    printf("min=%.3lf\tmax=%.3lf\n\n", min, max);
    printf("String:%s\n", nyx);
    printf("Шаблон:");
    scanf("%s", temp);

    inp = strstr(nyx, temp);
    while (inp)
    {
        sprintf(nyx, inp + 1);
        calc++;
        inp = strstr(nyx, temp);
    }
    printf("Кол-во совпадений:%d\n", calc);
    memset(nyx,0, sizeof(nyx));
    calc=0;
    printf("\n**************************************\n");

    printf("Вычисление Y\n");
    for (x = min_x, i = 0; x <= max_x; x += (max_x - min_x) / (step - 1), i++) {
        printf("\nx=%.3lf\t", x);
        test[i].mas_Y = log(-pow(a, 2) - 2 * a * x + 3 * pow(x, 2) + 1);
        printf("Y=%.3lf\n", test[i].mas_Y);
        sprintf(buffer, "%.3lf", test[i].mas_Y);
        strcat(nyx, buffer);
    }
    for (i = 0, min = test[0].mas_Y, max =test[0].mas_Y; i < step; i++) {
        if (test[i].mas_Y > max)
            max = test[i].mas_Y;
        if (test[i].mas_Y < min)
            min = test[i].mas_Y;
    }
    printf("min=%.3lf\tmax=%.3lf\n\n", min, max);
    printf("String:%s\n", nyx);
    printf("Шаблон:");
    scanf("%s", temp);

    inp = strstr(nyx, temp);
    while (inp)
    {
        sprintf(nyx, inp + 1);
        calc++;
        inp = strstr(nyx, temp);
    }
    printf("Кол-во совпадений:%d\n", calc);
    memset(nyx,0, sizeof(nyx));
    printf("************************************************************************************\n");

    fwrite = fopen("/home/lilith/Desktop/Informatika/proj/C/Lab7/file.txt", "w");
    for (i = 0; i < step; i++)
    {
        fprintf(fwrite, "%.3lf\t, %.3lf\t, %.3lf\n", test[i].mas_G, test[i].mas_F, test[i].mas_Y);
    }
    fclose(fwrite);

    fread = fopen("/home/lilith/Desktop/Informatika/proj/C/Lab7/file.txt", "r");
    while (!feof(fread))
    {
        fscanf(fread, "%lf, %lf, %lf\n", &G1, &F1, &Y1);
        printf("G = %0.3lf, F = %0.3lf, Y = %0.3lf\n", G1, F1, Y1);
    }
    fclose(fread);

    return 0;
}

