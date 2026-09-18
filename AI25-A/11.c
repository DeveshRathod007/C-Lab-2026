#include<stdio.h>

void main()
{
    int H,M,D,S,rem1,rem2;
    printf("Enter time in seconds\n");
    scanf("%d", &S);
    
    D=S/(24*3600);
    rem1=S%(24*3600);
    
    H=rem1/3600;
    
    rem2=rem1%3600;
    
    M=rem2/60;
    
    printf("The time is %d days %d hours and %d minutes", D, H, M);
}