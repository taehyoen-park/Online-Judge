#include<stdio.h>

int main()
{
	int n,m,k,result = 0;
	int m1,k1;
	
	scanf("%d %d %d",&n,&m,&k);
	if(m > k)
	{
		result += k;
		m1 = m-k; //남아있는 동그라미 개수 
		k1 = n-k; //남아있는 카드 개수(전부 x)
		result += (k1 - m1); 
	}
		
	else
	{
		result += m; 
		m1 = k-m; //남아있는 (그려야할)동그라미 개수 
		k1 = n-m; //남아있는 카드 개수(전부 x)
		result += (k1 - m1);
	}
	
	printf("%d",result);
	return 0;
}
