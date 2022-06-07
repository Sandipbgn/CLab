#include<stdio.h>
#include<conio.h>
 
 int main (){
     float s, u , t , a;
     printf("Enter the intial velocity");
     scanf("%f" ,&u);
     printf("Enter the time");
     scanf("%f" , &t);
     printf("Enter the acceleration");
     scanf("%f" , &a);
     s= (u*t) + (0.5*a*t*t);
     printf("the distance traveled by moving body is %f" , s);
     getch();
 }