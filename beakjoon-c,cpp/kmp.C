#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char name[100];
	char kmp[100] = { 0 };
	
	scanf("%s", name);
	for (int i = 0,k = 0; name[i] != '\0'; i++)
	{
		if (name[i] >= 65 && name[i] <= 90)
		{
			kmp[k] = name[i];
			k++;
		}
		else
			continue;
	}

	for (int i = 0; kmp[i] != 0; i++)
	{
		printf("%c",kmp[i]);
	}
		
	return 0;
}