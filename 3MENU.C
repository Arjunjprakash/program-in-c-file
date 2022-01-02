#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,n,i,fact=1,count=0;
	clrscr();
	while(ch!=4)
	{
		printf("\n***MENU***\n");
		printf("1.Factorial of a number\n2.Prime or not\n3.Odd or even\n4.Exit\n");
		printf("enter your choices");
		scanf("%d",&ch);
		switch(ch)
		{
			case1:
			printf("FACTORIAL\n");
			printf("enter a number");
			scanf("%d",&n);
			for(i=n;i>0;i--)
			{
			fact=fact*i;
			}
			printf("factorial of %d is %d",n,fact);
			break;
			case2:
			printf("PRIME OR NOT\n");
			printf("enter a number");
			scanf("%d",&n);
			for(i=1;i<=n;i++)
			{
				if(n%i==0)
				count=1;
			}
			if(count==2)
			printf("%d is a prime number",n);
			else
			printf("%d is not a prime number",n);
			break;
			case3:
			printf("ODD OR EVEN\n");
			printf("enter a number");
			scanf("%d",&n);
			if(n%2==0)
			printf("%d is an even number");
			else
			printf("%d is a odd number");
			break;
			case4:
			printf("EXIT");
			break;
		}
	}
	getch();
}