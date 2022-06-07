#include<stdio.h>
#include<conio.h>
 
 void main (){
     int KM, M;
     printf("Enter the length in KM");
     scanf("%d" , &KM);
     M = KM*1000;
     printf("The lenght in meter is %d", M);
     getch();
 }