//How to create and initialize a pointer !

#include<stdio.h>
void main(){
   int n, x = 10;
   int *ptr; //declaring a pointer variable
   ptr=&x; //Initialization
   printf("%d obtained by using pointer",*ptr);
   n=*ptr;//Dereferencing using * operator
   printf("\n%d obtained by dereferecing",n);
 }