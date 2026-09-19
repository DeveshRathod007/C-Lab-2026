#include<stdio.h>

void main(){

    int n;
    float com;

    printf("Enter the sales amount\n");
    scanf("%d", &n);
    
   if(n<=500){
      com=n*0.05;
   }
   else if(n>500 && n<=2000){
    com=35+(n-500)*0.1;
   }
   else if(n>2000 && n<=5000){
    com=185+(n-2000)*0.12;
   }
   else if(n>5000){
    com=n*0.125;
   }
   
   printf("The commision is %f", com);
}
