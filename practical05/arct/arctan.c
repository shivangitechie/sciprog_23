#include<stdio.h>
#include<math.h>

// Function declaration/prototype
double arctanh1(const double x, const double delta);
double arctanh2(const double x);

int main()
{
	double delta, x;
	printf("Enter the precision for the Maclaurin series\n");
	scanf("%lf",&delta);
	int length = 1000;
	double tan1[length]; //storing the result of arctanh1
	double tan2[length]; //storing the result for arctanh2
	int j=0; //array index
	x = -0.9;
	while(x<=0.9 && j<length)
	{
		tan1[j] = arctanh1(x,delta); // Maclaurin Series
		tan2[j] = arctanh2(x); // Natural log approximation
		printf("The difference at x = %lf between them is %.10lf\n", x, fabs(tan1[j] - tan2[j])); // Print the difference
		j++;
		x += 0.1;	
	}
	return 0;
}

// Find the estimated value by Maclaurin Series
double arctanh1(const double x, const double delta)
{
	double arcTan = 0; // approximation
	double elem, val;  // Element in the series
	int n = 0; // sum parameter
	do
	{
		val = 2*n+1;
		elem = pow(x,val)/val;
		arcTan += elem;
		n++;

	}while(fabs(elem)>=delta);
	return arcTan;
}

// Find the value using natural log approximation
double arctanh2(const double x)
{
	return (log(1+x) - log(1-x))/2; 
}
