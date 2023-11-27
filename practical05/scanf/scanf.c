#include <stdio.h>
int main(void) 
{
	int i, ierr; 
	double a;
	// Enter information from user
	printf("Enter an int and double\n");
	ierr = scanf("%d %lf",&i,&a);
	if(ierr != 2)
		printf("Problem in input");
	return 0;
}
