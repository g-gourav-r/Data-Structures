#include<stdio.h>
#include<stdlib.h>
int main(){
    int r,c,i,j;
    printf("Enter the size of the 2D array\n");
    scanf("%d%d",&r,&c);
    int *arr[r];
    for(i=0;i<r;i++){
        arr[i]=(int*)malloc(c*sizeof(int));
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("2-D array\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
}