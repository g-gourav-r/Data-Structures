#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,j,r,c,count=0;
    printf("Enter the size of the array \n");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The array is\n");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if (arr[i][j]==0){
            count=count+1;
            }
        }
    }
    if(count>(r*c)/2){
        printf("\nIt is a sparse matrix");
    }
    else{
        printf("The matrix is not sparse");
    }
}