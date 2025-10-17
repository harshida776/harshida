#include<stdio.h>
void display_array(int ary[],int size)
{
	printf("Array Elements are:\n");
	for(int i=0;i<size;i++)
		printf("%d\t\n",ary[i]);
}
void sort(int arys[],int sze)
{
	int i,j,temp;
	printf("\nsorted Array:\n");
	for(i=0;i<sze;i++)
	{
		for(j=i+1;j<sze;j++)
		{	 
			if(arys[i]>arys[j])
			{	
				temp=arys[i];
				arys[i]=arys[j];
				arys[j]=temp;
			}
		}
	}
}
void merge_array(int ary1[], int ary2[], int ary3[], int size1, int size2)
{ 
	int i,j;
	for(i=0;i<size1;i++)
        {
		ary3[i]=ary1[i];
	}
	for(int j=0;j<size2;j++)
	{
		ary3[i]=ary2[j];
		i++;
        }
}
int main()
{
	int a[10],b[10],c[20],i,j,n,m;
	printf("Enter the limit of Array1:");
	scanf("%d",&n);
	if(n<=10)
	{	
		for(i=0;i<n;i++)
		{
			printf("Enter the number:");
			scanf("%d",&a[i]);
		}
		display_array(a,n);
		sort(a,n);
		display_array(a,n);
		
	}
	printf("\n Enter the limit of Array2:");
	scanf("%d",&m);
	if(m<=10)
	{	
		for(i=0;i<m;i++)
		{
			printf("Enter the number:");
			scanf("%d",&b[i]);
		}
		display_array(b,m);
		sort(b,m);
		display_array(b,m);
	}
	printf("Merged array:\n");
	merge_array(a,b,c,n,m);
	display_array(c,n+m);
	printf("Display merged array:");
	sort(c,n+m);
	display_array(c,n+m);
	
return (0);
}
