#include<stdio.h>
int main()
{
int i,j,k,n,c,a[20],min;
printf("$$$ SELECTION SORT $$$");
printf("\nEnter the array limit:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Passes of selection sort:\n");
for(i=0;i<n-1;i++)
{
min=i;;
for(j=i+1;j<n;j++)
{
if(a[min]>a[j])
{
min=j;
}
}
if(i!=min)
{
k=a[i];
a[i]=a[min];
a[min]=k;
}
printf("\nPass=%d,\t",i+1);
for(c=0;c<n;c++)
{
printf("%d\t",a[c]);
}
}
printf("\nThe sorted elements are:\t");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
