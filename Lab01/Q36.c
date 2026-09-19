#include<stdio.h>

void main()
{
    int n,i;
     
    printf("Enter the value of n\n");
    scanf("%d", &n);
    
    printf("The series is\n");
    
    for(i=1;i<2*n;i++){
       if((i%2)==1){
       printf("%d ", i);
       }
    }
}