#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],n,i,l;
	clrscr();
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>l)
		l=a[i];
	}
	printf("the largest element is %d",l);
	getch();
}