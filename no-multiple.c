#include<stdio.h>
int main()
{
	int a,i,k=0;
	printf("enter the value:");
	scanf("%d",&a);
	for(i=1;i<=5;i++)
	{
		k+=a;
		printf("\n%d\n",k);
	}
	
}
