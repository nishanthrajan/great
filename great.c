#include <stdio.h>

void main() {
	int a,b,c;
	printf("enter the numbers:");
	scanf("%d%d%d",&a,&b,&c);
		printf("\n%d\n%d\n%d\n",a,b,c);
	if((a>b)&&(a>c))
	{
		printf("\nthe greater number is %d\n",a);
	}
	else if(b>c)
	{
		printf("\nthe greater number is %d\n",b);
		
	}
	else
	{
		printf("\nthe greater number is %d\n",c);
	}
	return 0;
}
