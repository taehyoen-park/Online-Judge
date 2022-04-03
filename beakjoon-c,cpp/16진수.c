#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%x",&n);
	printf("%d",n);
	
	return 0;
}
/*
int main()
{
	char arr[7];
	int i,j,num[7],sum = 0,pick = 0;
	scanf("%s",arr);
	
	for(i = 0; arr[i] != '\0'; i++)
	{
		num[i] = arr[i] - 48;
		if(num[i] >= 10)
			num[i] -= 7;
		pick = i;
	}
	
	for(i = pick,j = 0; arr[i] != '\0'; i--,j++)
	{
		sum += num[i] * (int)pow(16,j);
	}
	
	printf("%d",sum);
	return 0;
}*/
