#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#define QSIZE 5
int item,front=0,rear=-1,q[10];
void insertrear(){
  if(rear ==QSIZE-1){
    printf("Queue is Overflow");
    return;
  }rear +=1;
  q[rear] = item;
}
int deletfront(){
  if(front>rear){
    front =0;
    rear =-1;
    return -1;
  }return q[front++];
}
void display(){
  int i;
  if(front> rear){
    printf("quene is empty\n");
    return;
  }
  printf("contents of queue\n");
  for(i=front;i<=rear;i++)
  printf("%d\n",q[i]);
}
void main()
{ char ch;
  int choice;
  for(;;){
 printf("1.insert_rear\t2.delete_front\t3.display\t4.exit:\n");
 printf("enter choice\n");
 scanf("%d",&ch);
 switch(ch)
   {
    case 1:printf("enter the item:\t");
       scanf("%d",&item);
       insertrear();
       break;
    case 2:item =deletfront();
    if(item==-1){
      printf("Queue is UnderFlow\n");break;}
      printf("item Deleted: %d \n",item);
       break;
      case 3:display();
      break;
    default:exit(0);
   }
 }}
