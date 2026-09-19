#include<stdio.h>

void main()
{
    int n,i;
     
    printf("Enter the value of n\n");
    scanf("%d", &n);
    
    printf("Fibonacci series is\n");
    
    int arr[n];
    
    arr[0]=0;
    arr[1]=1;
    
    for(i=1;i<(n-1);i++){
    arr[i+1]=arr[i]+arr[i-1];
    }
    for(i=0;i<n;i++){
    printf("%d ", arr[i]);
    }
}