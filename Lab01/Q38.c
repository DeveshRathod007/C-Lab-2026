#include<stdio.h>

void main(){

    int n;

    printf("Enter number of terms\n");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        printf("%d ", i*i);
    }
}