#include<stdio.h>
#include<string.h>

int main()
{
	int i,sum = 10;
	char Bowl[51];
	
	scanf("%s",Bowl);
	for(i = 1;Bowl[i] != '\0'; i++)
	{
		if((int)Bowl[i] == (int)Bowl[i-1])
			sum += 5;
		
		else
			sum += 10;
	}
	
	printf("%d",sum);
	return 0;
}
