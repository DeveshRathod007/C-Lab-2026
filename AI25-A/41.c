#include<stdio.h>

void main(){

    int n;

    printf("Enter the number\n");
    scanf("%d", &n);

    printf("The factors are\n");
    
    for(int i=1;i<=n;i++){
        int rem=n%i;
        if(rem==0){
        printf("%d ", i);
        }
    }
}
