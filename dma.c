//Using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
void main(){
  int *arr,i,m,n;
  printf("Enter the number of elements in array\n");
  scanf("%d",&n);
  arr=(int*)malloc(n*sizeof(int));
  if(arr==NULL){
    printf("Memory allocation failed\n");
  }
  else{
    printf("Enter the array elements\n");
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    printf("Enter the number of extra elements :\n");
    scanf("%d",&m);
    arr=(int*)realloc(arr,m);
    printf("Enter the additional elements:\n");
    for(i=n;i<n+m;i++){
      scanf("%d",&arr[i]);
    }
  }
  printf("The array elements are :\t");
  for(i=0;i<m+n;i++){
    printf("%d\t",arr[i]);
  }
  free(arr);
}