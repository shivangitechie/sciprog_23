#include<stdio.h>
#include<math.h>
int main(){
// Initialize the end-points and the number of points
	int N=12,i;	
	double x_0 = 0.0;
	double x_12 = M_PI/3.0;
	double width = (x_12 - x_0)/(double)N;
	
// Get values of f(x) = tan(x) for the end points, and add them up.
	double X = tan(x_0) + tan(x_12);

//Get equidistant points, evaluate tan at these points, store 2tan(x)at each step
	double x;
	double y;
	double sum = X;
	for(i=1; i<=N-1; i++)
	{
		x = x_0 + width*i;
		y = tan(x);
		sum += 2*y;		
	} 
	double integral_approx = sum*width*0.5;
	double integral_exact = log(2.0);
	printf("The approximate integral value is %.4f \n", integral_approx);
	printf("The exact integral value is %.4f \n", integral_exact);	

	return 0;

}
