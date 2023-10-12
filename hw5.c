#include <stdio.h>

int abc(n)
{
	if (n == 1)
		return 1;
	int a = n / 2;
	int b = n % 2;
	return abc(a) * 10 + b;
}

int main()
{
	int n;
	printf("Please enter a number: ");
	scanf("%d", &n);
	printf("%d", abc(n));
	return 0;
}