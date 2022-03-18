// Stack implementation using stacks
#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack[MAX], ch, item, top=-1;

void push(int stack[], int item){
  if(top==MAX-1)
    printf("Overfolw");
  else
    stack[++top]=item;
}

int pop(){
  if(top==-1)
    printf("Underflow");
  else
    return stack[top--];
}

void display(int stack[]){
  if(top==-1)
    printf("The stack is empty");
  else
    for(int i=top;i>=0;i++){
      printf("%d\t",stack[i]);
    }
}

void main(){
  while(ch<5){
    printf("\nEnter the choice\n1.Insert\t2.Delete\t3.Display\t4.Exit\n");
    scanf("%d",&ch);
    switch(ch){
      case 1:printf("Enter the item to be added: ");
            scanf("%d",&item);
            push(stack,item);
            break;
      case 2:printf("%d",pop());
            break;
      case 3:display(stack);
            break;
      case 4:exit(0);
            break;
      default: printf("Enter a valid choice");
            break;
      }
    }
}