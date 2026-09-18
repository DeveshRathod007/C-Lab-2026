#include<stdio.h>

void main(){

    for(int i=1;i<=4;i++){
        printf("\n");
        for(int k=1;k<=4-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d", j);
            if(j==i){
                for(int l=j-1;l>=1;l--){
            printf("%d", l);
                }
                break;
            }
        }
    
    }
}
