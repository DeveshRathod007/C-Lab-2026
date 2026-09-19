#include<stdio.h>

void main()
{
    int n,i,a;
     
    printf("Enter the number n\n");
    scanf("%d", &n);
    
    a=0;
    
    for(i=1;i<=n;i++){
    if(n%i==0){
    a++;
    }
    }
    if(a==2){
    printf("%d is a prime number", n);
    }
    else{
    printf("%d is not a prime number", n);
    }
}