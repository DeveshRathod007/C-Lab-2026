#include<stdio.h>
void main(){
	int s1,s2,s3,s4,s5,T;
	float P;
	
	printf("Enter marks of five subjects\n");
	scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5 );
	
	T=s1+s2+s3+s4+s5;
	P=T/5;
	
	printf("Your total of five subjects is %d and it's percentage is %f %%", T, P);
}
