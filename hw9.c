#include <stdio.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return -1;
}

int main()
{
	char str[100];
	printf("Input> ");
	scanf("%[^\n]s", str);
	for (int i = 0; i < strlen(str); i++)
	{
		if (convCase(str[i]) != -1)
			str[i] = convCase(str[i]);
	}
	printf("Output> %s", str);
	return 0;
}