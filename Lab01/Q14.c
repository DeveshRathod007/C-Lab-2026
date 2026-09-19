#include<stdio.h>

void main()
{
    int a;
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);
    
    a=(int)ch;
    if(a>=33 && a<=47 || a>=58 && a<=64 || a>=91 && a<=96 || a>=123 && a<=126){
    printf("Character is a special symbol");
    }
    if(a>=48 && a<=57){
    printf("Character is a number");
    }
   if(a>=65 && a<=90){
    printf("Character is a capital letter");
    }
   if(a>=91 && a<=112){
    printf("Character is a small letter");
    }
    
}