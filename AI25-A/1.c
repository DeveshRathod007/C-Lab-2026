#include<stdio.h>

void main(){

     int P;
     float R,I,T;
     
     printf("Enter principal amount,rate of interest and time period in years\n");
     scanf("%d%f%f", &P, &R, &T);
     
     I=(P*R*T)/100;
     
     printf("Your Inerest for %f years is %f", T, I);
     
}
