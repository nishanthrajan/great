#include<stdio.h>
int main()
{
	int num,i,sum=0;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
		
	}
		printf("the sum of %d natural numbers are %d",num,sum);
}
