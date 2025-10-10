#include<stdio.h>
int main()
{
int i=0,a,largest=0;
        while (i<5)
       {	
       		printf("Enter a number:");
       		scanf("%d",&a);
  			if (a>largest)
  			{
  				largest=a;
 			}
 		i++;
 	}
 printf("The largest number is %d:",largest);
 return(0);
 }
