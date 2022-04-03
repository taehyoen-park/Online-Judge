#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	
	scanf("%d", &n);
	for (int i = n; i > 0; i--){
		for (int j = 1; j <= n+(n-i); j++)
		{
			if (i > j)
				printf(" ");
			
			else if(i % 2 == 0)
			{
				if (j % 2 == 0)
					printf("*");

				else		
					printf(" ");
			}
			else
			{
				if (j % 2 != 0)
					printf("*");

				else
					printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}