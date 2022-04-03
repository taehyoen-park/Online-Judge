#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n,T;
	char str[21];

	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %s",&n, str);
		for (int j = 0; str[j] != 0; j++)
		{
			for (int k = 0; k < n; k++)
			{
				printf("%c", str[j]);
			}
		}
		printf("\n");
	}

	return 0;
}
