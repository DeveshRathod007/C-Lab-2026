#include<stdio.h>

void main()
{
    int a,b;
    char ch;
    printf("Enter a alphabetical character\n");
    scanf("%c", &ch);
    
    a=(int)ch;
    
   b=(a>=91 && a<=112)? 1:0;
   if (b==1){
    printf("Character is a small letter");
    }
    else{
    printf("Character is not a small letter");
    }
}