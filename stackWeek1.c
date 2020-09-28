#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int top=-1;
int stack[SIZE];
void push(int ele)
 {
    if(top==SIZE-1)
    {
        printf("The stack is full\n");
    }
    else
    {
        top++;
        stack[top]=ele;
    }
 }
 int pop()
 {
     if(top==-1)
     {
         return 0;
     }
     else
     {   printf("Element removed is : %d\n",stack[top--]);
         return 1;
     }
 }

 void display()
 {
     if(top==-1)
         printf("The stack is empty\n");
     else
     {
         printf("The elements are\n");
         for(int i=0;i<=top;i++)
         {
             printf("%d\n",stack[i]);
         }
     }
 }

int main()
{
  int c,d,p;
  while(c!=4)
  {
  printf("Enter command\t1-push\t2-pop\t3-Display\t4-Exit\n");
  scanf("%d",&c);
  switch(c)
  {
    case 1:printf("Enter an element\n");
           scanf("%d",&d);
           push(d);
           break;
    case 2:p=pop();
           if(p==0)
            printf("Stack is empty\n");
            else
            printf("\nElement removed succesfully\n");
            break;
    case 3:display();
           break;
    case 4:break;
    default: printf("Invalid input\n");
  }
  }
return 0;
}
