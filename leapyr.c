#include<stdio.h>
int main()
{
	int year;
	printf("enter the year:");
	scanf("%d",&year);
	if(year%4==0)
	{
		if(year%100==0)
		{
	if(year%400==0)
	{printf("it is leap year");
		}	
		else
		{printf(" it is not a leap year");
		}
	}
		else
		{printf("It is a leapyear");
		}
	}
	else{printf(" It is not a leap year");
	}
}
