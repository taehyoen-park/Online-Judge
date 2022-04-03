#include<stdio.h>

int main()
{
	int n,i,a,b;
	int result[2] = { 0 };
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d %d",&a,&b);
		if(a > b)
			result[0]++;
		else if(a < b)
			result[1]++;
		else 
			continue;
	}
	printf("%d %d",result[0],result[1]);
	return 0;
}
