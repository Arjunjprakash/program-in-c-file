#include<stdio.h>
#include<conio.h>
#define max 5
int queue[max],rear=-1,front=-1;
void insert();
void delet();
void display();
void main()
{
	int ch;
	clrscr();
	do
	{
		printf("*mainmenu*\n");
		printf("1.insert\n");
		printf("2.delete\n");
		printf("3.display\n");
		printf("4.exit\n");
		printf("enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			       break;
			case 2:delet();
			       break;
			case 3:display();
			       break;
		}
	}while(ch!=4);
	getch();
}
void insert()
{
	int num;
	if(rear==max-1)
	{
		printf("OVERFOLW");
	}
	else
	{
		printf("enter the element inserted");
		scanf("%d",&num);
		if(front==-1&&rear==-1)
		{
			front=0;
			rear=0;
		}
		else
		{
			rear=rear+1;
		}
		queue[rear]=num;
	}
}
void delet()
{
	int val;
	if(front==-1||front>rear)
	printf("UNDERFLOW");
	else
	{
		val=queue[front];
		front=front+1;
		printf("deleted element is %d",val);
	}
}
void display()
{
	int i;
	if(front==-1&&rear==-1)
	printf("EMPTY QUEUE");
	else
	{
		printf("QUEUE is\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
}