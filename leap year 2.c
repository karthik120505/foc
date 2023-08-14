#include<stdio.h>
#include<conio.h>
int year;
int main()
{
	printf("Enter the year :");
	scanf("%d",&year);
	if (year%4==0)
	{
		printf("%d is leap year",year);
		printf("%d is the next leap year",year+4);
	}
	else if (year%4==1)
	{
		printf("%d is not leap year",year);
		printf("\n%d is the previous leap year",year-1);
		
	}
	else if (year%4==2)
	{
		printf("%d is not leap year",year);
		printf("\n%d is the previous leap year",year-2);
		
	}
	else if (year%4==3)
	{
		printf("%d is not leap year",year);
		printf("\n%d is the previous leap year",year-3);
		
	}
	else
	{
		printf("%d is not leap year",year);
		printf("\n%d is the previous leap year",year);
	}
	getch();
}
