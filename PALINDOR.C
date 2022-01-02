#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,temp,sum=0;
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
	if(sum==temp)
	printf("%d is a palimdrome number",temp);
	else
	printf("%d is not a palindrome number",temp);
	getch();
}