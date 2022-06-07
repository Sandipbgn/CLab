#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float a, b, c, x1, x2;
    printf("Enter a, b ,c \n");
    scanf("%f%f%f", &a, &b, &c);
    x1 = (-b + pow((b * b - 4 * a * c), 1 / 2)) / (2 * a);
    x2 = (-b - pow((b * b - 4 * a * c), 1 / 2)) / (2 * a);
    printf("first root of equation is %f\n", x1);
    printf("first root of equation is %f", x2);
    getch();

}