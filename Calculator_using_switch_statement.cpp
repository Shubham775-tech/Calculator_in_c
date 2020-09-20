#include<stdio.h>
#include<conio.h>

int main(void)
{
	int n,a,b,c,d,e,f;
	printf("\n Enter first number: ");
	scanf("%d",&a);
	printf("\n Enter second number: ");
	scanf("%d",&b);
	
	printf("\n Which opreration do you want to perform");
	printf("\n 1) Addition");
	printf("\n 2) Subtraction");
	printf("\n 3) Multiplication");
	printf("\n 4) Division");
	printf("\n Enter your choice: ");
	scanf("%d",&n);
	
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;
	
	
	switch(n)
	{
		case 1:
			printf("\n Addition of two numbers is: %d ",c);
			break;
		case 2:
		
			printf("\n Subtraction of two numbers is: %d",d);
			break;
		case 3:
			
			printf("\n Multiplication of two numbers is: %d",e);
			break;	
		case 4:
			
			printf("\n Division  of two numbers is: %d ",f);
			break;
		default:
			printf("\nError!!! Enter right choice");
			
			
	}
	return 0;
}
