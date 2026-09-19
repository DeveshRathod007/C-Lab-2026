#include<stdio.h>

void main()
{
    int n,i,max1,max2;
     
    printf("Enter the number of no's\n");
    scanf("%d", &n);
    
    int arr[n];
    
    for(i=1;i<=n;i++){
    printf("Enter number %d\n", i);
    scanf("%d", &arr[i]);
    }
    
    max1=arr[1];
    max2=arr[2];
    
    for(i=1;i<=n;i++){
      if(max1<arr[i]){
      max1=arr[i];
      }
    }
    
    for(i=1;i<=n;i++){
      if(max2<arr[i] && arr[i]<max1){
      max2=arr[i];
      }
    }
    
    printf("Max is %d and second Max number is %d", max1, max2);
}
