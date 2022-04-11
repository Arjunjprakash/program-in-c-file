#include<stdio.h>
#include<conio.h>
#define MAX 5
int stack[MAX],top=-1;
void push();
void pop();
void peek();
void display();
void main()
{
	int ch;
	clrscr();
	do
	{
		printf("main menu");
		printf("\n1.push");
		printf("\n2.pop");
		printf("\n3.peek");
		printf("\n.4.display");
		printf("\n5.exit");
		printf("enter your option");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
		}
	}while(ch!=5);
	getch();
}
void push()
{
	int item;
	if(top==MAX-1)
	{
		printf("overflow");
	}
	else
	{
		printf("enter the element to push");
		scanf("%d",&item);
		top=top+1;
		stack[top]=item;
	}
}
void pop()
{
	int val;
	if(top==-1)
	printf("underflow");
	else
	{
		val=stack[top];
		top=top-1;
		printf("popped element is %d",val);
	}
}
void peek()
{
	if(top==-1)
	printf("stack is empty");
	else
	printf("top element is %d",stack[top]);
}
void display()
{
	int i;
	if(top==-1)
	printf("stack is empty");
	else
	{
		printf("stack");
		for(i=0;i<=top;i++)
		{
			printf("%d",stack[i]);
		}
	}
}



