#include<stdio.h>
#define max_size 10
int Q[max_size],REAR=-1,FRONT=-1;
void enqueue( int item)
{
	if(REAR>= max_size)
	{
		printf("Queue is full");
	}
	else
	{
		if (FRONT==-1 && REAR==-1)
			FRONT=0;
		REAR=REAR+1;
		Q[REAR]=item;
		printf("The inserted element is %d\n",item);
	}
}

void dequeue()
{
	if(FRONT<-1)
	{
		printf("queue is empty");
	}
	else
	{
		if(FRONT=REAR)
			FRONT=REAR=0;
		else
			FRONT=FRONT+1;
			printf("deleted element is:%d\n",Q[FRONT]);
			
	}
}

void display()
{
	printf("Queue elements are:\n");
	for(int i=FRONT;i<=REAR;i++)
		printf("%d\t\n",Q[i]);
	
}

int main()
{
	int choice,item;
	do
	{
		printf("1.enqueue\n 2.dequeue\n 3.Display\n 4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter the element to insert:");
			       scanf("%d",&item);
			       enqueue(item);
			       break;
			case 2:dequeue();
			       break;
			case 3:display();
			       break;
			case 4:break;
			default:printf("Enter the correct choice.");
		}
	  }while(choice!=4);
	  return(0);
	 
}	
	  	
