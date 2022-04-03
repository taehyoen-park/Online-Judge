#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);

	for (int i = n; i > 0; i--) {
		for (int j = 0; j < n + (n - i); j++) {
			if (i - 1 > j)
				printf(" ");

			else
				printf("*");
		}
		printf("\n");
	}

	return 0;
}
