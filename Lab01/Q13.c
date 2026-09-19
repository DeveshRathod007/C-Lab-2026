#include<stdio.h>

void main()
{
    int a,r;
    printf("Enter a number\n");
    scanf("%d", &a);
    r=a%2;
    if(r==0){
    printf("Number is even");
    }
    else{
    printf("Number is odd");
    }
}