#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int price,num;

	scanf("%d", &price);
	for (int i = 1; i <= 9; i++)
	{
		scanf("%d", &num);
		price -= num;
	}
	printf("%d",price);

	return 0;
}