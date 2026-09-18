#include<stdio.h>

void main(){
	
	int H,M,S,T;
	
	printf("Enter time in hours,minutes and seconds\n");
	scanf("%d%d%d", &H, &M, &S);
	
	T=(S)+(M*60)+(H*60*60);
	
	printf("Total number of seconds are %d", T);
}
