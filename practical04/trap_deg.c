#include<stdio.h>
#include<math.h>

// Declare global variables
int N=12;
double tanvalues[13];

// Function prototypes
double degtorad(double deg);
double traprule(int N);

// Main function
int main()
{ 
	int i;
	double deg, rad;
	// The loop generates degree values
	for(i = 0; i<=N; i++)
	{
		deg = i * 5.0;
		rad = degtorad(deg); // convert the degree values to radian values
		tanvalues[i] = tan(rad); 
		//printf("tanvalues[%d] is %f at %f degrees \n",i,tanvalues[i],deg);
	}

	// Calculate the estimated value
	double integral_approx = traprule(N);
	// Calculate the exact value
	double integral_exact = log(2.0);
	printf("Approximate Integral: %.5f \nExact Integral: %.5f",integral_approx,integral_exact);	 
	printf("\n");
	return 0;
}

// Function to convert from degress to radian
double degtorad(double deg)
{
	return ((M_PI*deg)/180.0);	
}

// Apply the trapezoidal rule (estimated area)
double traprule(int N)
{
	int i;
	double width;
	double area = tanvalues[0]  + tanvalues[N];
	for (i=1; i<N; i++)
	{
		area += 2.0*tanvalues[i];
	}
	width = degtorad((60.0 - 0)/(2.0*N));
	area = width*area;
	return area;	
}
