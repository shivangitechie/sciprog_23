#include<stdio.h>
#include<stdlib.h>

// Function declaration/prototype for Fibonacci Series  
// Input arguments: Fn-1 and Fn-2 
// Output arguments: Fn and Fn-1
void fibonacci(int *a, int *b);

int main()
{
	int n, i;
	int f0 = 0, f1 = 1;
	// Take the value of n as input
	printf("Enter the value of n\n");
	scanf("%d",&n);
	if(n<1)
	{
		printf("The number is not positive");
		exit(1);
	}
	printf("The Fibonacci sequence is: \n");
	printf("%d, %d, ",f0, f1);

	// Calculating the Fibonacci Sequence starting at 2
	for(i = 2; i<= n; i++)
	{
		fibonacci(&f1,&f0);
		printf("%d, ",f1);

		if((i+1)%10==0)
			printf("\n");
	}
	printf("\n");
		
	return 0;	
}

void fibonacci(int *a, int *b)
{
	int next;
	// *a = fn-1 *b = fn-2
	next = *a + *b;
	// *a = fn *b = fn-1
	*b = *a;
	*a = next;	
}
