#include<stdio.h>
#include<math.h>

int main()
{
	int n, m,sum = 0,max = 1000000000;
	double a, i;
	
	scanf("%d", &n);
	scanf("%d", &m);

	for (i = n; i <= m; i++) {
		a = sqrt(i);
		if (i == (int)a*(int)a)
		{
			sum += (int)i;
			if(i < max)
				max = i;
		}	
	}
	
	if(sum == 0)
	{
		printf("-1");
		return 0;
	}
	
	else
	{
		printf("%d\n",sum);
		printf("%d",max);
	}
	
	return 0;
}
