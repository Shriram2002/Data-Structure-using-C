#include<stdio.h>
int main()
{
int i,j,k,n,a[20],data;
printf("$$$ INSERTION SORT $$$");
printf("\nEnter the array limit:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Passes of insertion sort:\n");
for(i=1;i<n;i++)
{
data=a[i];
for(j=i-1;(j>=0)&&(data<a[j]);j--)
{
a[j+1]=a[j];
}
a[j+1]=data;
printf("\nPass=%d,\t",i);
for(k=0;k<n;k++)
{
printf("%d\t",a[k]);
}
}
printf("\nThe sorted elements are:\t");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
