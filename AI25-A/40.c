#include<stdio.h>

int fac(int n);

void main(){

    int n;
    float sum=0;

    printf("Enter number of terms\n");
    scanf("%d", &n);

    for(float i=1;i<=n;i++){
        sum=sum+(i/fac(i));
    }

    printf("%f", sum);
}

int fac(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
        fac*=i;
    }
    return fac;
}