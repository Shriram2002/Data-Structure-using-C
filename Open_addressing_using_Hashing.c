#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10
int main()
{
int a[MAX],num,key,I,ans;
int create(int);
void linear_prob(int [],int,int),display(int []);
for(int i=0;i<MAX;i++)
a[i]=-1;
do
{
printf("Enter the Number:");
scanf("%d",&num);
key=create(num);
linear_prob(a,key,num);
printf("\nPress 1 to continue,0 to exit\n");
ans=getch();
}
while(ans=='1');
display(a);
}
int create(int num)
{
int key;
key=num%10;
return key;
}
void linear_prob(int a[MAX],int key,int num)
{
int flag,i,count=0;
void display(int a[]);
flag=0;
if(a[key]==-1)
a[key]=num;
else
{
i=0;
while(i<MAX)
{
if(a[i]!=-1)
count++;
i++;
}
if(count==MAX)
{
printf("\n\nHash Table is Full");
display(a);
exit(1);
}
for(i=key+1;i<MAX;i++)
if(a[i]==-1)
{
a[i]=num;
flag=1;
break;
}
for(i=0;i<key&&flag==0;i++)
if(a[i]==-1)
{
a[i]=num;
flag=1;
break;
}
}
}
void display(int a[MAX])
{
int i;
printf("\nThe Hash Table is....\n");
for(i=0;i<MAX;i++)
printf("\n%d %d",i,a[i]);
}
