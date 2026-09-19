#include<stdio.h>

void main()
{
    int a1,a2,a3,max;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &a1, &a2, &a3);
    max=a1;
    if(max>a2 && max>a3){
    max=a1;
    }
    else if(a2<max && max<a3){
    max=a3;
    } 
    else if(max<a2 && max>a3){ 
    max=a2; 
    }
    else if(max<a2 && max<a3 && a2<a3){
    max=a3;
    }  
    else if(max<a2 && max<a3 && a2>a3){
    max=a2;
    }  
    printf("Max is %d", max);
}