#include<stdio.h>

void main()
{
    int a1,a2,a3,max;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &a1, &a2, &a3);
    max= (a1>a2 && a1>a3)? a1:a2;
    max= (a2>a3 && a2>a1)? a2:a3;
    max= (a3>a1 && a3>a2)? a3:a1;
    printf("Max is %d", max);
}