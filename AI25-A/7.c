#include<stdio.h>

void main(){
	
	float A,b,h;
	
	printf("Enter value of base and height of triangle\n");
	scanf("%f%f", &b, &h);
	
	A=0.5*b*h;
	
	printf("Area of triangle is %f", A);
}
