#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
int data;
struct stack *next;
}node;
node *newn,*top=NULL,*temp;
void push();
void pop();
void display();
int main()
{
int ch;
printf("\n\n\n$$$ STACK IMPLEMENTATION USING LINKED LIST OR POINTER $$$\n\n\n");
while(1)
{
printf("STACK OPERATIONS ARE\n");
printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
printf("Enter your choice:\t");
scanf("%d",&ch);
switch(ch)
{
case 1:push();break;
case 2:pop();break;
case 3:display();break;
case 4:exit(0);
default:printf("Enter the correct option\n");
break;
}
}
}
void push()
{
newn=(node *)malloc(sizeof(node));
printf("Enter the element to be pushed:\t");
scanf("%d",&newn->data);
if(top==NULL)
{
newn->next=NULL;
top=newn;
}
else
{
newn->next=top;
top=newn;
}
}
void pop()
{
if(top==NULL)
{
printf("Stack is empty or underflow\n");
}
else
{
printf("The deleted element is: %d",top->data);
temp=top;
top=top->next;
}
free(temp);
}
void display()
{
if(top==NULL)
{
printf("Stack is empty or underflow\n");
}
else
{
temp=top;
printf("Content of the stack is:\n");
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;}
}
}
