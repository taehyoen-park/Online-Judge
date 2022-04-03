#include<stdio.h>

int main()
{
	int n,i,num = -1;
	int val[1000];
	double avg,num2;
	
	scanf("%d",&n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d",val + i);
	}
	
	for(i = 0; i < n; i++)
	{
		if(val[i] > num)
		{
			num = val[i];
		}
	}
	
	for(i = 0; i < n; i++)
	{
		num2 += val[i];
	}
	
	avg = ((num2 / n) / num) * 100;
	
	printf("%lf",avg);
	return 0;
}
