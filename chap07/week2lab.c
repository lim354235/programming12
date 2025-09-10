#include <stdio.h>
#define max 5


double printArrayFloat(float R[], int size);
double copyArrayFloat(float from[], float to[], int size);
int test_printArrayFloat();

int main()
{

	return 0;
}

double printArrayFloat(float R[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d", R[i]);
	}
	printf("\n");
}

double copyArrayFloat(float from[], float to[], int size)
{
	int i;
	for (i = 0; i < max; i++)
	{
		from[i] = to[i];
	}
}

int test_printArrayFloat()
{
	double a[max] = { 1.0, 2.0 ,3.0 ,4.0 ,5.0 };

	printf("a = ");
	printArrayFloat(a, max);
}

