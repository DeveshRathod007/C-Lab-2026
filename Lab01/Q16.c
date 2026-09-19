#include<stdio.h>

void main()
{
    int a1,a2,a3,max;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &a1, &a2, &a3);
    max=a1;
    if(max<a2){
    max=a2;
    }
    if(max<a3){
    max=a3;
    }  
    printf("Max is %d", max);          
}