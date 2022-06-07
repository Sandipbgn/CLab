#include<stdio.h>
#include<conio.h>
 
 int main (){
     float s , p, t, r;
     printf("enter the value of p t r");
     scanf("%f%f%f",&p, &t, &r);
    s = (p*t*r)/100;
    printf("Simple interest is %f" ,s);
    getch();
 }