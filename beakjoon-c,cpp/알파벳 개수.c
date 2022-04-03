#include<stdio.h>

int main()
{
	int num[26] = { 0 },i;
	char str[100];
	
	scanf("%s",str); 
	for(i = 0; str[i] != '\0'; i++)
	{
		num[str[i] - 97]++;
	}
	
	for(i = 0; i < 26; i++)
		printf("%d ",num[i]);
		
	return 0;
} 
