#include<stdio.h>
#include<conio.h>
int smallest(int a[],int k,int n);
void selectionsort(int a[],int n);
void main()
{
	int a[10],i,n;
	clrscr();
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selectionsort(a,n);
	printf("array  sorted");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}
int smallest(int a[],int k,int n)
{
	int pos=k,small=a[k],j;
	for(j=k+1;j<n;j++)
	{
		if(a[j]<small)
		{
			small=a[j];
			pos=j;
		}
	}
	return pos;
}
void  selectionsort(int a[],int n)
{
	int pos,k,temp;
	for(k=0;k<n;k++)
	{
		pos=smallest(a,k,n);
		temp=a[k];
		a[k]=a[pos];
		a[pos]=temp;
	}
}
