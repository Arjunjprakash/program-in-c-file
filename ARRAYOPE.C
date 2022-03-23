#include<stdio.h>
#include<conio.h>
void create();
void display();
void insert();
void delet();
int a[10],n;
void main()
{
	int ch;
	clrscr();
	printf("array opeartions\n");
	printf("menu\n1.create\n2.insert\n3.delete\n4.display\n5.exit\n");
	printf("enter your choice");
	scanf("%d",&ch);
	do
	{
		switch(ch)
		{
			case 1:
				create();
				break;
			case 2:
				insert();
				break;
			case 3:
				delet();
				break;
			case 4:
				display();
				break;
		}
	}while(ch!=5);
	getch();
}
void create()
{
	int i;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array elements");
	while(i<=n-1)
	{
		scanf("%d",&a[i]);
		i++;
	}
	printf("array created\n");
}
void display()
{
	int i;
	printf("array elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void insert()
{
	int i,k,item;
	printf("enter the position");
	scanf("%d",&k);
	printf("enter the element insert");
	scanf("%d",&item);
	while(i>=k)
	{
		a[i+1]=a[i];
		i=i-1;
	}
	n=n+1;
	a[k]=item;
	printf("\nNew item,%d is inserted",item);
}
void delet()
{
	int i,k,item;
	printf("enter the position");
	scanf("%d",&k);
	i=k;
	item=a[k];
	while(i<=n-1)
	{
		a[i]=a[i+1];
		i=i+1;
	}
	n=n-1;
	printf("\n%d is deleted",item);
}
