#include<stdio.h>

void main(){
    int n,sum=0;

    printf("Enter number:\n");
    scanf("%d", &n);

    sum+=n;

    while(n>=0){
        printf("Enter number:\n");
        scanf("%d", &n);
        if(n>=0){
           sum+=n;
        }
        else
        break;
        
    }

    printf("Sum=%d", sum);

}