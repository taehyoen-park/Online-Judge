#include<stdio.h>

int main()
{
	int num[3][2];
	int i,j,a,b;
	
	for(i = 0; i < 3;i++)
	{
		scanf("%d %d",&num[i][0],&num[i][1]);
	}
	a = num[0][0] == num[1][0] ? num[2][0] : num[0][0] == num[2][0] ? num[1][0] : num[0][0];
	b = num[0][1] == num[1][1] ? num[2][1] : num[0][1] == num[2][1] ? num[1][1] : num[0][1];
	
	printf("%d %d",a,b);
	return 0;	
}
