#include<stdio.h>

void main()
{
    printf("CALCULATOR");
    int a,n1,n2;
    char ch;
    printf("WHAT YOU WANT TO USE\n1.ADDITION\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.DIVISION \n");
    scanf("%d", &a);
    
    switch(a){
    	case 1:
        printf("Enter  two numbers you want to add\n");
        scanf("%d%d", &n1, &n2);
        int add= n1+n2;
        printf("Answer = %d", add);
        break;
    
        case 2:
        printf("Enter  two numbers you want to sub\n");
        scanf("%d %d", &n1, &n2);
        int sub= n1-n2;
        printf("Answer = %d", sub);
        break;
        
        case 3:
        printf("Enter  two numbers you want to multiply\n");
        scanf("%d %d", &n1, &n2);
        int multi= n1*n2;
        printf("Answer = %d", multi);
        break;
        
        case 4:
        printf("Enter  two numbers you want to divide\n");
        scanf("%d %d", &n1, &n2);
        float div=(float) n1/n2;
        printf("Answer = %f", div);
        break;
        	
        default:
        printf("INAVLID CHOICE!!");
    }
    
}
