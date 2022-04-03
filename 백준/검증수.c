#include<stdio.h>

int main()
{
	int num[5],i,sum = 0;

	scanf("%d %d %d %d %d",&num[0],&num[1],&num[2],&num[3],&num[4]);
	for(i = 0; i < 5; i++)
	{
		sum += num[i] * num[i];
	}
	
	printf("%d",sum % 10);
	return 0;
}
