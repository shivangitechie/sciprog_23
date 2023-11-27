#include<stdio.h>
#include<stdlib.h>

// Allocate Array
int* allocatearray(int n)
{
	int *p;
	p = (int *) malloc(n*sizeof(int));
	return p;
}

// Fill with ones
void fillwithones(int *a, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		a[i]=1;
	}	
}

// Print the array
void printarray(int *a, int n)
{
	int i;
	for(i=0; i<n; i++)
		printf("a[%d]: %d\n",i, a[i]);
}

// Deallocate the array
void deallocatearray(int *a)
{
	free(a);
}

int main()
{
	int n, *a; 
	printf("Enter the size of the array:");
	scanf("%d",&n);
	a = allocatearray(n);
	fillwithones(a,n);
	printarray(a,n);
	deallocatearray(a);
	a = NULL;
	return 0;
}
