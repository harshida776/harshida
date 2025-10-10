#include<stdio.h>
int main()
{
int n,sum=0,i=0;
double avg;
printf("Enter the number:");
scanf("%d",&n);
do
{
sum=sum+i;
i++;
}
while(i<=n);
avg=sum/n;
printf("The average of upto this given number is :%f",avg);
return(0);
}
