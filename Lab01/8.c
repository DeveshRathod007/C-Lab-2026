#include<stdio.h>

void main(){
	
	float D,H,M,S;
	
	printf("Enter time of revolution in seconds\n");
	scanf("%f", &S);
	
	M=S/60;
	H=M/60;
	D=H/24;
	
	printf("Number of days,hours and minutes are %f,%f and %f", D, H, M);
}
