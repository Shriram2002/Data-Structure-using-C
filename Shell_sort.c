#include<stdio.h>
int main()
{
int i,j,k,n,a[20],data,p;
printf("$$$ SHELL SORT $$$");
printf("\nEnter the array limit:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Passes of shell sort:\n");
for(k=n/2;k>0;k=k/2)
{
for(i=k;i<n;i++)
{
data=a[i];
for(j=i;(j>=k)&&(data<a[j-k]);j=j-k)
{
a[j]=a[j-k];
}
a[j]=data;
printf("\nK=%d,\t",k);
for(p=0;p<n;p++)
{
printf("%d\t",a[p]);
}
printf("\n");
}
}
printf("\nThe sorted elements are:\t");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
