#include<stdio.h>

void main(){
	
	float F,C;
	
	printf("Enter temperature in fahrenheit\n");
	scanf("%f", &F);
	
	C=((F-32)*5)/9;
	
	printf("Your temperature in centigrade degrees is %f", C);
}
