#include<stdio.h>

void main(){

    char C[5]={'A','B','C','D','E'};

    for(int i=0;i<=5;i++){
        for(int j=0;j<i;j++){
            printf("%c", C[j]);
        }
         printf("\n");
    }
}
