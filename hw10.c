#include <stdio.h>

typedef struct city
{
	char name[100];
	char country[100];
	int population;
} City;

int main()
{
	City a[3];
	printf("Input three cities:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("Name> ");
		fgets(a[i].name, sizeof(a[i].name), stdin);
		a[i].name[strlen(a[i].name) - 1] = 0;
		printf("Country> ");
		fgets(a[i].country, sizeof(a[i].country), stdin);
		a[i].country[strlen(a[i].country) - 1] = 0;
		printf("Population> ");
		scanf("%d", &a[i].population);
		fgetc(stdin);
	}
	printf("\nPrinting the three cities:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people", i + 1, a[i].name, a[i].country, a[i].population);
		if (i != 2)
			printf("\n");
	}
	return 0;
}