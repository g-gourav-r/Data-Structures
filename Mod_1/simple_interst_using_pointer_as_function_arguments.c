//passing pointers as function arguments
#include<stdio.h>
int simple(float *,float *,float *);
void main(){
  int p,t,r;// variables
  int *p1,*p2,*p3;//pointer variables
  printf("Enter the values\n");
  scanf("%f%f%f",&p,&t,&r);
  p1=&p;p2=&t;p3=&r;//Adding address to pointers
  SI(p1,p2,p3);
}
void SI(float *p1,float *p2,float *p3)//function taking pointers as arguments
{
  float s=(*p1**p2**p3)/100;
  printf("%f",s);
 
}