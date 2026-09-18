#include<stdio.h>

void main(){

    int n[10],odd=0,even=0,zero=0;

    for(int i=1;i<=10;i++){
        printf("Enter number:\n");
        scanf("%d", &n[i]);
    }
    for(int i=1;i<=10;i++){
        if(n[i]>0){
           odd++;
        }
        else if(n[i]<0){
            even++;
        }
        else if(n[i]==0){
            zero++;
        }
    }
    printf("Number of positive,negative and zero elements area %d,%d and %d", odd, even, zero);
}
