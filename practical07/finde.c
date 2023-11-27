// Find e using Taylor Expansion for e^x
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

// Function Prototype
int factorial(int n);

int main()
{
	int i, order;
	double e, *terms; 
	
	// Enter Polynomial Order 
	printf("Enter the polynomial order:");
	if(scanf("%d",&order)!=1){
		printf("Didn't enter a number");
		return 1;
	}
	
	// Allocate space depending on order
	terms = malloc(order*sizeof(double));
	// Calculate each term
	for(i = 0; i<order; i++)
	{
		terms[i] = 1.0/(double)(factorial(i+1));
		printf("e term for order %d is %1.14lf \n",i+1,terms[i]);
	}

	e = 1.0;
	// Find the estimated value of e 
	for(i=0; i<order; i++)
	{
		e += terms[i];
	}
	// Free the allocated memory
	free(terms);
	printf("e is estimated as %.10lf, with difference %e\n", e, e-exp(1.0));	

	return 0;
}

// Function to return the factorial (Recursive function)
int factorial(int n)
{
	if(n<0)
	{
		printf("Error:Negative number passed for factorial");
		return -1;
	}
	else if(n==0)
	{
		return 1;
	}
	else 
	{
		return(n*factorial(n-1));
	}	
}


