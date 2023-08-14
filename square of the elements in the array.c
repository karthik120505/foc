#include<stdio.h>
#include<conio.h>
int a,i,b[100];
int main()
{
	
	printf("Enter the numbers in the array : ");
	scanf("%d",&a);
	printf("Enter the elements in the array : ");
	for(i=0;i<a;i++)
		scanf("%d",&b[i]);
	
	printf("The square of the elements in the array :\n");
	for (i=0;i < a ; i++)
	{
		printf("%d ",b[i]*b[i]);
	}
	printf("\n");
	return 0;
	
		
		
}
