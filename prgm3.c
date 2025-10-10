#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a Number:");
	scanf("%d",&a);
	printf("Enter a Number:");
	scanf("%d",&b);
	if(a>b)
	{
		printf("Largest %d and %d is %d",a,b,a);
	}
	else
	{
		printf("Largest %d and %d is %d",a,b,b);
	}
	return(0);
}
