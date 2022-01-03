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
	printf("array elements in reverse are\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	getch();
}