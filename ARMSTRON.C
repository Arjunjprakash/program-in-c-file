#include<stdio.h>
#include<stdio.h>
void main()
{
	int n,temp,r,c,sum=0;
	clrscr();
	printf("enter a number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum=sum+c;
		n=n/10;
	}
	if(sum==temp)
	printf("%d is a armstrong number",temp);
	else
	printf("%d is not a armstrong number",temp);
	getch();
}