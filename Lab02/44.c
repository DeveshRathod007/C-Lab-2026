#include<stdio.h>

void main(){

    int n[10],odd=0;

    for(int i=1;i<=10;i++){
        printf("Enter number:\n");
        scanf("%d", &n[i]);
    }
    for(int i=1;i<=10;i++){
        if(n[i]%2!=0){
           odd++;
        }
    }
    printf("Number of even and odd elements area %d and %d", odd, (10-odd));
}
