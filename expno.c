#include<stdio.h>
int main()
{
	int b_no,ex_no,result=1;
	printf("enter the numbers:");
	scanf("%d%d",&b_no,&ex_no);
	while(ex_no!=0)
	{
		result*=b_no;
		--ex_no;
	}
	printf("the  value is %d",result);
}
