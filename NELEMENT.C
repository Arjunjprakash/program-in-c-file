#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],n,i;
	clrscr();
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}