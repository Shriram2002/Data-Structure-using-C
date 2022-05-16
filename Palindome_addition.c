#include<stdio.h>
#include<malloc.h>
struct llist
{
int coef, exp;
struct llist *next;
};
typedef struct llist node;
void polyinsert(node **, int, int);
void polydisp(node *);
void polyadd(node *, node *, node**);
int main()
{
node *p=NULL,*q=NULL, *r=NULL;
int a,b;
printf("\n\t\tPolynomial addition using linked list\n");
printf("\n\n Enter the First Polynomial equation\n\n\t");
while(1)
{
printf("Enter the coef and power of the new term\n (0,0) for stop : ");
scanf("%d%d", &a,&b);
if((a==0) && (b==0))
break;
else
polyinsert(&p,a,b);
}
polydisp(p);
printf("\n\nEnter the Second polynomial equation\n\n\t");
while(1)
{
printf("Enter the coef and power of the new term (0,0) for stop : ");
scanf("%d%d", &a,&b);
if((a==0) && (b==0))
break;
else
polyinsert(&q,a,b);
}
polydisp(q);
printf("\n\nAddition of two polynomials\n\n\t");
polyadd(p,q,&r);
polydisp(r);
}
void polyinsert(node **s, int x, int y)
{
node *n, *t=*s;
n=(node *)malloc(sizeof(node));
n->coef=x;
n->exp=y;
n->next=NULL;
if(*s==NULL)
*s=n;
else
{
while(t->next!=NULL)
t=t->next;
t->next=n;
}
}
void polydisp(node *t)
{
while(t!=NULL)
{
printf("%dx^%d + ",t->coef, t->exp);
t=t->next;
}
printf("\b\b\b \n\n");
}
void polyadd(node *x, node *y, node **z)
{
node *t;
while(x!=NULL && y!=NULL)
{
if(*z==NULL)
{
*z=(node *)malloc(sizeof(node));
t=*z;
}
else
{
t->next=(node *)malloc(sizeof(node));
t=t->next;
}
if(x->exp > y->exp)
{
t->coef=x->coef;
t->exp=x->exp;
x=x->next;
}
else if(x->exp < y->exp)
{
t->coef=y->coef;
t->exp=y->exp;
y=y->next;
}
else if(x->exp == y->exp)
{
t->coef=x->coef+y->coef;
t->exp=x->exp;
x=x->next;
y=y->next;
}
}
while(x!=NULL)
{
if(*z==NULL)
{
*z=(node *)malloc(sizeof(node));
t=*z;
}
else
{
t->next=(node *)malloc(sizeof(node));
t=t->next;
}
t->coef=x->coef;
t->exp=x->exp;
x=x->next;
}
while(y!=NULL)
{
if(*z==NULL)
{
*z=(node *)malloc(sizeof(node));
t=*z;
}
else
{
t->next=(node *)malloc(sizeof(node));
t=t->next;
}
t->coef=y->coef;
t->exp=y->exp;
y=y->next;
}
t->next=NULL;
}
