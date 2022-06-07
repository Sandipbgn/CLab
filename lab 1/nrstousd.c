#include<stdio.h>
#include<conio.h>
 
 int main (){
     float npr , usd , rate=105 ;
    printf("Enter amount in NPR ");
    scanf ("%f", &npr);
    usd = npr/rate ;
    printf("Amount in USD is %f", usd);
    getch();
 }