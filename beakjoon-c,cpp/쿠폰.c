#include<stdio.h>

int main()
{
	int i,n;
	double num;
	
	scanf("%d",&n); 
	for(i = 0; i < n; i++)
	{
		scanf("%lf",&num);
		num -= (num / 5) ;
		
		printf("$%.2f\n",num);
	}

	return 0;
}
