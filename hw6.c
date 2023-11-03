#include <stdio.h>

int main()
{
	int numbers[5];
	printf("Please input five integers: ");
	for (int i = 0; i < 5; i++)
		scanf("%d", &numbers[i]);
	printf("\nOdd numbers: ");
	for (int i = 0; i < 5; i++)
	{
		if (numbers[i] % 2 == 1)
			printf("%d ", numbers[i]);
	}
	printf("\nEven numbers: ");
	for (int i = 0; i < 5; i++)
	{
		if (numbers[i] % 2 == 0)
			printf("%d ", numbers[i]);
	}
	return 0;
}