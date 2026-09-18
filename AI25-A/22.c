#include<stdio.h>

void main()
{
    int n1,fac,i;
    
    printf("Enter the number\n");
    scanf("%d", &n1);
    
    fac=1;
    
    for(i=1;i<=n1;i++){
    fac=fac*i;
    }
    printf("Factorial of %d is %d", n1, fac);
}