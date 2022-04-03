#include<stdio.h>

int main()
{
	int i,j;
	char str[101];
	scanf("%s",str);
	for(i = 0; str[i] != '\0'; i++)
	{
		if(i % 10 == 0 && i != 0)
			printf("\n");
		printf("%c",str[i]);
	}
	
	return 0; 
}
