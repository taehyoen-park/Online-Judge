#include<stdio.h>

int main()
{
	int num[4],tem;
	
	scanf("%d %d %d",num,num+1,num+2);
	if(num[0] > num[1])
	{
		tem = num[0];
		num[0] = num[1];
		num[1] = tem;
	}
	
	if(num[1] > num[2])
	{
		tem = num[1];
		num[1] = num[2];
		num[2] = tem;
	}
	
	if(num[0] > num[1])
	{
		tem = num[0];
		num[0] = num[1];
		num[1] = tem;
	}
	printf("%d %d %d",num[0],num[1],num[2]);
	return 0;
} 
