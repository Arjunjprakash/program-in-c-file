#include<stdio.h>
#include<conio.h>
void create();
void main()
{
	clrscr();
	create();
	getch();
}
void create()
{
	int n,a[20],i=0,sum=0;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array elements:");
	while(i<=n-1)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
		i++;
	}
	printf("sum of array elements is %d\n",sum);
	printf("array elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

}