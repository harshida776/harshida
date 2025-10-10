#include<stdio.h>
int main()
{	
	float num1,num2,a,b,c,d;
	int e,num3,num4;
	printf("Enter the number 1:");
	scanf("%f",&num1);
	printf("Enter the number 2:");
	scanf("%f",&num2);
	printf("Enter the number 3:");
	scanf("%d",&num3);
	printf("Enter the number 4:");
	scanf("%d",&num4);
	
	a=num1+num2;
	b=num1-num2;
	c=num1*num2;
	d=num1/num2;
	e=num3%num4;
	
	printf("sum=%f\n",a);
	printf("Difference=%f\n",b);
	printf("multiply=%f\n",c);
	printf("Division=%f\n",d);
	printf("Modulus=%d\n",e);
	
	
	
	return(0);
}
