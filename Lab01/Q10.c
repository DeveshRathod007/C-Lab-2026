#include<stdio.h>

void main(){
	
	int C,P,M,E;
	float CM;
	
	printf("Enter your marks in maths,chemistry,physics and entrance examination\n");
	scanf("%d%d%d%d", &M, &C, &P, &E);
	
	CM=((M+C+P)/2)+E;
	
	printf("Your cuttoff marks is %f", CM);
}
