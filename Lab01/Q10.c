#include<stdio.h>

void main(){
	
	int C,P,M,E;
	float CM;
	
	printf("Enter your marks in maths,chemistry,physics(out of 200) and entrance examination(out of 100)\n");
	scanf("%d%d%d%d", &M, &C, &P, &E);
	
	CM=((M+C+P)/2)+E;
	
	printf("Your cuttoff marks is %f", CM);
}
