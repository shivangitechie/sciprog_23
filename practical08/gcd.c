#include<stdio.h>

// Calculate gcd using iteration
int gcd_iteration(int a, int b)
{
	int temp;
	while(b!=0)
	{
		temp = b; 
		b = a%b;
		a = temp;
	}
	return a;
}

// Calculate gcd using recursion
int gcd_recursive(int a, int b)
{
	if(b==0)
		return a;
	else
		return gcd_recursive(b,a%b);	
}

int main()
{
	int a,b;
	printf("Enter a positive integers a: ");
	scanf("%d", &a);
	if(a<=0) // Error Checking
	{
		printf("Error: Enter a positive integer\n");
		return 0;
	}
	printf("Enter a positive integer b:");
	scanf("%d",&b); 
	if(b<=0) // Error Checking
	{
		printf("Error: Enter a positive integer\n");
		return 0;
	}
	printf("The greatest common divisor of %d and %d using iteration is %d\n", a,b,gcd_iteration(a,b));
	printf("The greatest common divisor of %d and %d using recursion is %d\n", a,b,gcd_recursive(a,b));
	return 0;
}
