#include<stdio.h>

void main()
{
    int n1,n2,n3,n,i,a=0,d=0,b=0,digit;
     
    printf("Enter the number n\n");
    scanf("%d", &n1);
    
    n3=n1;
    n2=n1;
    
    for(; n1 != 0;n1=n1/10){
    d++;
    }
    
    n=n2;
    
    for(i=1;i<=d;i++){
    digit=n2%10;
    a= a+digit;
    n2=n2/10;
    }
    
    if(a>=9){
    n2=a;
    
    for(; n1 != 0;a=a/10){
    d++;
    }
    
    n=n2;
    
    for(i=1;i<=d;i++){
    digit=n2%10;
    b= b+digit;
    n2=n2/10;
    }
	}
	else{
		b=a;
	}
    printf("Sum of the digits of %d is %d", n3, b);
}
