#include<stdio.h>
int main()
{
	int number,count=0;
	printf("enter the number:");
	scanf("%d",&number);
	while(number!=0)
	{
		count++;
		number/=10;
	}
	printf("The count of the number is %d",count);
}
