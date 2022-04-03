#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	
	scanf("%d", &n);
	for (int i = 1; i <= n*2 ; i++)
	{
		for (int j = n; j > 0; j--)
		{
			if (i < j || (i > n && j > (n*2 - i)))
				printf(" ");

			else
				printf("*");
		}
		printf("\n");
	}

	return 0;
}