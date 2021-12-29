#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,sum=0,temp;
	clrscr();
	printf("enter a number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	printf("\n Reverse of %d is %d",temp,sum);
	getch();
}