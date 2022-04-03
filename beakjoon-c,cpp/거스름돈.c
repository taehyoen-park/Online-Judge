#include<stdio.h>
#define money 1000

int main()
{
	int num,count = 0;
	
	scanf("%d",&num);
	
	num = money - num;
	
	if(num == 0)
	{
		printf("%d",2);
		return 0;
	}
	
	if(num >= 500)
	{
		count += num / 500;
		num = num % 500;
	}
		
	if(num >= 100)
	{
		count += num / 100;
		num = num % 100;
	}
	
	if(num >= 50)
	{
		count += num / 50;
		num = num % 50;
		
	}
	
	if(num >= 10)
	{
		count += num / 10;
		num = num % 10;
	}
	
	if(num >= 5)
	{
		count += num / 5;
		num = num % 5;
	}
	
	if(num >= 1)
	{
		count += num;
	}
	
	
	printf("%d",count);
	
	return 0;
}
