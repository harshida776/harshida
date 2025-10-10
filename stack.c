#include<stdio.h>
#define max_size 10
int ary[max_size],top=-1;
void push( int item)
{
	if(top>=max_size)
	{
		printf("stack is full");
	}
	else
	{
		top+=1;
		ary[top]=item;
		printf("The pushed element is %d\n",item);
	}
}

void pop()
{
	if(top<-1)
	{
		printf("stack is empty");
	}
	else
	{
		
		printf("deleted element is:%d\n",ary[top]);
		top-=1;
	}
}

void display()
{
	printf("stack elements are:\n");
	for(int i=top;i>=0;i--)
		printf("%d\t\n",ary[i]);
	
}

int main()
{
	int choice,item;
	do
	{
		printf("1.push\n 2.pop\n 3.Display\n 4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter the element to push:");
			       scanf("%d",&item);
			       push(item);
			       break;
			case 2:pop();
			       break;
			case 3:display();
			       break;
			case 4:break;
			default:printf("Enter the correct choice.");
		}
	  }while(choice!=4);
	  return(0);
	 
}	
	  	

	   
	
