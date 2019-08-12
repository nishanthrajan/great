#include<stdio.h>
int main()
{int n,k,i,sum=0;
printf("enter the value of n:");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("enter the value of k");
scanf("%d",&k);
for(i=0;i<k;i++)
{
	sum=sum+a[i];
}
printf("sum of first %d integer'%d''",k,sum);
}
