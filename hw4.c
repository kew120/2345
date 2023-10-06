#include <stdio.h>

int main()
{
	int n;
	printf("Please enter a number: ");
	scanf("%d", &n);
	for (int i = 2; i < n; i += 2)
	{
		if (n % i == 0)
		{
			printf("It is not a prime number.");
			return 0;
		}
	}
	printf("It is a prime number.");
	return 0;
}