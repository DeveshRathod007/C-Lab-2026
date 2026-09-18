#include<stdio.h>

void main()
{
    int a1,a2,a3,a4,a5,s;
    printf("Enter marks of five subjects\n");
    scanf("%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5);
    
    s=(a1+a2+a3+a4+a5)/5;
    
    if(90<s && s<=100){
    printf("Division is A+");
    }
    else if(80<s && s<=90){
    printf("Division is A");
    }
    else if(70<s && s<=80){
    printf("Division is B+");
    }
    else if(60<s && s<=70){
    printf("Division is B");
    }
    else if(50<s && s<=60){
    printf("Division is C+");
    }
    else if(40<s && s<=50){
    printf("Division is C");
    }
    else if(s<=40){
    printf("Division is D");
    }
}