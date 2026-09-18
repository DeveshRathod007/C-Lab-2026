#include<stdio.h>
#include<math.h>

void main(){

    int n,div=0;

    printf("Enter the number \n");
    scanf("%d", &n);

    for(int i=1;i<=sqrt(n);i++){
        int rem=n%i;
        if(rem==0){
            div++;
        }
    }
    if (div==1){
        printf("It is a prime number");
    }
    else{
       printf("It is a composite number");
    }
    
}