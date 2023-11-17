#include <stdio.h>
#include <math.h>

int main()
{
	double a[5], b = 0, c = 0;
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%lf", &a[i]);
		b += a[i];
	}
	b /= 5;
	for (int i = 0; i < 5; i++)
		c += pow(a[i] - b, 2);
	c /= 5;
	printf("Standard Deviation = %.3lf", sqrt(c));
	return 0;
}