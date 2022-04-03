#include<stdio.h>

int main()
{
	int i,j,max = -1,per[5] = { 0 },num[5][4] = { 0 };
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 4; j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 4; j++){
			per[i] += num[i][j];
		}
	}
	
	for(i = 0; i < 5; i++)
	{
		if(per[i] > max)
		{
			max = per[i];
			j = i;
		}
			
	}
	
	printf("%d %d",j + 1,max);
	return 0;
}
