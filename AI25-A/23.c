#include<stdio.h>

void main()
{
    int n1,n2,pow,i;
    
    printf("Enter the two number\n");
    scanf("%d %d", &n1, &n2);
    
    pow=1;
    
    for(i=1;i<=n2;i++){
    pow=(pow)*n1;
    }
    printf("Power is %d", pow);
}