#include<stdio.h>

void main(){
	
	float a,b,c;
	
	printf("Enter two variables\n");
	scanf("%f%f", &a, &b);
	
	c=a;
	a=b;
	b=c;
	
	printf("Your swaped numbers are %f and %f", a, b);
}
