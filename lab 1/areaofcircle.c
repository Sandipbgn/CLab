#include<stdio.h>
#include<conio.h>
#define PI 3.14

void main (){
    float p, r , a;
    printf("enter the radius of circle");
    scanf("%f", &r);
    p= 2*PI*r;
    a= PI*r*r;
    printf("Perimeter of Circle is %f", p) ;
    printf("Area of circle is %f", a);
    getch();
}