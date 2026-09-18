#include<stdio.h>

void main()
{
    int n1,i;
    float y; 
    printf("Enter value of which table is printed \n");
    scanf("%d", &n1);
    
    for(i=1;i<=10;i++){
    printf("%d X %d = %d \n", n1, i, n1*i);
    }
}