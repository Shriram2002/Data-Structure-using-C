#include<stdio.h>
#include<stdlib.h>
typedef struct queue
{
int data;
struct queue *next;
}node;
node *newn,*front,*rear,*temp;
void enqueue ();
void dequeue();
void display();
int main()
{
int ch;
printf("\n\n\n$$$ QUEUE IMPLEMENTATION USING LINKED LIST OR POINTER $$$\n\n\n");
while(1)
{
printf("QUEUE OPERATIONS ARE\n");
printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
printf("Enter your choice:\t");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue();break;
case 2:dequeue();break;
case 3:display();break;
case 4:exit(0);
default:printf("Enter the correct option\n");
break;
}
}
}
void enqueue()
{
newn=(node *)malloc(sizeof(node));
printf("Enter the element to be inserted:\t");
scanf("%d",&newn->data);
newn->next=NULL;
if(front==NULL)
{
front=newn;
rear=newn;
}
else
{
rear->next=newn;
rear=newn;
}
}
void dequeue()
{
if(front==NULL)
{
printf("Queue is empty or underflow\n");
}
else
{
temp=front;
front=front->next;
printf("The deleted element is: %d",temp->data);
}
free(temp);
}
void display()
{
if(front==NULL)
{
printf("Queue is empty or underflow\n");
}
else
{
temp=front;
printf("Content of the queue is:\n");
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
}
