#include <stdio.h>
#include <math.h>

double standard_deviation(double* arr)
{
	int b = 0, c = 0;
	for (int i = 0; i < 5; i++)
		b += arr[i];
	b /= 5;
	for (int i = 0; i < 5; i++)
		c += pow(arr[i] - b, 2);
	c /= 5;
	return sqrt(c);
}

int main()
{
	double a[5];
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%lf", &a[i]);
	}
	printf("Standard Deviation = %.3lf", standard_deviation(a));
	return 0;
}
