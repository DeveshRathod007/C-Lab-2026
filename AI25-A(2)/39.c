#include<stdio.h>

void main(){

    char C[5]={'A','B','C','D','E'};

    for(int i=0;i<=5;i++){
        printf("\n");
        for(int j=0;j<=i;j++){
            printf("%c", C[i]);
        }
    }
}
