#include<stdio.h>

void main()
{
    int n,i,max,min;
     
    printf("Enter the number of no's\n");
    scanf("%d", &n);
    
    int arr[n];
    
    for(i=1;i<=n;i++){
    printf("Enter number %d\n", i);
    scanf("%d", &arr[i]);
    }
    
    max=arr[1];
    min=arr[2];
    
    for(i=1;i<=n;i++){
      if(max<arr[i]){
      max=arr[i];
      }
    }
    
    for(i=1;i<=n;i++){
      if(min>arr[i] ){
      min=arr[i];
      }
    }
    
    printf("Maximum and minimum numbers are %d and %d", max, min);
}
