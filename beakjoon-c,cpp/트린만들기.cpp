#include<> #include<iostream>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	
	int start = 1;
	
	printf("0 1\n");
	m -= 1;
	for(int i = 1; i < n-1; i++)
	{
		if(m > 0)
			printf("1 %d\n",i+1);
		else
			printf("%d %d\n",i,i+1);
		m -= 1;
	}
	
	return 0;
}
