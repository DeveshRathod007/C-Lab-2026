#include<stdio.h>

void main()
{
    int n1,n2;
    char a;
    printf("Enter  two numbers you want to calculate\n");
    scanf("%d %d", &n1, &n2);
    printf("WHAT YOU WANT TO USE\n1.ADDITION\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.DIVISION \n");
    scanf(" %c", &a);
    
    if(a=='1'){
    int add= n1+n2;
    printf("Answer = %d", add);
    }
    else if(a=='2'){
    int sub= n1-n2;
    printf("Answer = %d", sub);
    }
    else if(a=='3'){
    int multi= n1*n2;
    printf("Answer = %d", multi);
    }
    else if(a=='4'){
    float div=(float) n1/n2;
    printf("Answer = %f", div);
    }
}