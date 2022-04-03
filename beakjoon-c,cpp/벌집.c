#include<stdio.h>

int main()
{
	int result = 1,l = 6,r = 12,a = 2,b = 7,n;
	scanf("%d",&n);
	
	if(n == 1)
	{
		printf("1");
		return 0;
	}
		
	
	else if(2 <= n && 7 >= n)
		result += 1;

	else
	{
		result += 1;
		while(7 < n)
		{
			if((a+l) <= n && (b+r) >= n)
			{
				result += 1;
				break;
			}
			else
			{
				a += l, b += r;
				l += 6,r += 6;
				result += 1;
			}
		}
	}

	printf("%d",result);
	return 0;	
}
