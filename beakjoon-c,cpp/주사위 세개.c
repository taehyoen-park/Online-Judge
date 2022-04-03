#include<stdio.h>

int main()
{
	int a,b,c,result = 0;
	
	scanf("%d %d %d",&a,&b,&c);
	
	if(a == b && b == c)
	{
		result += 10000+a*1000;
		printf("%d",result);
		return 0;
	}
	
	if(a == b || a == c || c == b)
	{
		if(b == c)
			result += 1000+b*100;
		else
			result += 1000+a*100;
		printf("%d",result);
		return 0;
	}
	
	if(a > b && a > c)
		result += a*100;
	else if(b > c && b > a)
		result += b*100;
	else
		result += c*100;
	printf("%d",result);
	return 0;	
} 
