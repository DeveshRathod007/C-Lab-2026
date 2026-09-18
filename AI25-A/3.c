#include<stdio.h>

void main(){
	
	int S;
	float D,GS;
	
	printf("Enter your monthly in-hand salary and deductions in it\n");
	scanf("%d%f", &S, &D);
	
	GS=(S+D)*12;
	
	printf("Your gross salary early is %f", GS);
}
