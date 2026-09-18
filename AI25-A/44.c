#include<stdio.h>

void main(){

    int n;
    float charge;

    printf("Enter consumption in units\n");
    scanf("%d", &n);
    
   if(n<=200){
      charge=n*0.5;
   }
   else if(n>200 && n<=400){
    charge=100+(n-200)*0.65;
   }
   else if(n>400 && n<=600){
    charge=230+(n-400)*0.8;
   }
   else if(n>600){
    charge=425+(n-600)*125;
   }
   
   printf("The total amount is %f", charge);
}
