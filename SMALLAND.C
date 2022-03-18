#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[10],large,small;
	clrscr();
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	large=small=a[0];
	for(i=0;i<n;i++)
	{
		if(large<a[i])
		large=a[i];
		if(small>a[i])
		small=a[i];
	}
	printf("largest element is %d\n",large);
	printf("smallest element is %d",small);
	getch();
}