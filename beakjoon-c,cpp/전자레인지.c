#include<stdio.h>
#include<stdlib.h>

int main()
{
	int button[3] = {300,60,10},abc[3] = { 0,};
	int t,i;
	scanf("%d",&t);
	
	if(t % 10 > 0)
	{
		printf("-1");
		return 0;
	}
	
	else
	{
		for(i = 0; i < 3; i++)
		{
			abc[i] = t/button[i];
			if(abc[i] > 0)t %= button[i];
			else continue;
		}
	}	
	
	printf("%d %d %d",abc[0],abc[1],abc[2]);
	return 0;	
}
