#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	clrscr();
	printf("enter array element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array elements are\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}