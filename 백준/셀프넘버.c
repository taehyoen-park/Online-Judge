#include<stdio.h>

int all(int num)
{
	int a = 0,val = num;
	
	while(val != 0)
	{
		a = a + (val % 10);
		val = val / 10;
 
	}
	num = num + a;
	
	return num;
}

int main()
{
	int num[10001];
	int m,i,k = 1;
	
	for(i = 0; i < 10001; i++)
	{
		num[i] = i;
	}
	
	for(i = 1; i < 9973; i++)
	{
		m = all(i);
		num[m] = 0;
	}

	for(i = 1; i < 10000; i++)
	{
		if(num[i] == 0)
			continue;
		else
			printf("%d\n",num[i]);
	}
	
	return 0;
}
