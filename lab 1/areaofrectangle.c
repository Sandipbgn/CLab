#include<stdio.h>
#include<conio.h>
 
 void main (){
     int l, b, a;
     printf("Enter the lenght and breadth of rectangle \n");
     scanf("%d%d", &l, &b);
     a=l*b;
     printf("Area of rectangle is %d", a);
     getch();
 }