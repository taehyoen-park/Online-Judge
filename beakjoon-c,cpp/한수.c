#include<stdio.h>

int main()
{
	int n,i,num[3],count = 99;
	scanf("%d",&n);
	if(n < 100)
		printf("%d",n);
	else if(100 <= n && 1000 > n)
	{
		for(i = n; i >= 100; i--)
		{
			num[0] = i / 100;
			num[1] = (i / 10) % 10;
			num[2] = i % 10;
			if(num[2] - num[1] == num[1] - num[0])
				count++;
		}
		printf("%d",count);
	}
	else
		printf("144");
	
	return 0;
}
