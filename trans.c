#include<stdio.h>
#include<stdlib.h>
void main(){
  int i,j,m,n;
  printf("Enter the size of the array\n");
  scanf("%d%d",&m,&n);
  int a[10][10],b[10][10];
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
  }
   for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      b[i][j]=a[j][i];
    }
  }
  printf("The matrix is \n");
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      printf("%d ",b[i][j]);
    }
  }
  printf("The transpose of matrix is \n");
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      printf("%d ",b[i][j]);
    }
    printf("\n");
  }

}