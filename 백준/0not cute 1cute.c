#include<stdio.h>

int main()
{
	int n,i,oz,num[2] = { 0 };
	
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d",&oz);
		if(oz == 0)
			num[0]++;
		else
			num[1]++;
	}
	if(num[0] < num[1])
		printf("Junhee is cute!");
	else
		printf("Junhee is not cute!");
	return 0;
}
