#include<stdio.h>
#include<math.h>

void main()
{
    int n1,n;
    float y;
    printf("Enter the value of x and n\n");
    scanf("%d %d", &n1, &n);
    
    if(n==1){
    y=(float)n1+1;
    }
    else if(n==2){
    y=(float)n1/n+1;
    }
    else if(n==3){
    y=1+pow(n1,n);
    }
    else if(n>3 || n<1){
    y=n1*n+1;
    }
    printf("y = %f", y);
}