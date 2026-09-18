#include<stdio.h>

void main()
{
    int n,i,odd,even;
    float y; 
    printf("Enter the value of n\n");
    scanf("%d", &n);
    odd=even=0;
    for(i=1;i<=n;i++){
    if(i%2==0){
    even =even+i;
    }
    else{
    odd=odd+i;
    }
    }
    printf("Sum of all odd and even terms are %d and %d", odd, even);
}