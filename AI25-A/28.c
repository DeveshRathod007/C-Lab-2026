#include<stdio.h>
#include<math.h>

void main()
{
    int n1,n2,n,i,a=0,d=0,digit;
     
    printf("Enter the number n\n");
    scanf("%d", &n1);
    
    n2=n1;
    
    for(; n1 != 0;n1=n1/10){
    d++;
    }
    
    n=n2;
    
    for(i=1;i<=d;i++){
    digit=n2%10;
    a= a+pow(digit,d);
    n2=n2/10;
    }
    
    if(a == n){
    printf("Number is Amstrong");
    }
    else{
    printf("Number is not Armstrong");
    }
}