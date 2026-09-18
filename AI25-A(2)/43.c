#include<stdio.h>

void main(){

    int n[10],sum=0;

    for(int i=1;i<=10;i++){
        printf("Enter number:\n");
        scanf("%d", &n[i]);
    }
    for(int i=1;i<=10;i++){
        sum+=n[i];
    }
    printf("sum is %d", sum);
}
