#include<stdio.h>

int main()
{
	int n,m,k,result = 0;
	int m1,k1;
	
	scanf("%d %d %d",&n,&m,&k);
	if(m > k)
	{
		result += k;
		m1 = m-k; //�����ִ� ���׶�� ���� 
		k1 = n-k; //�����ִ� ī�� ����(���� x)
		result += (k1 - m1); 
	}
		
	else
	{
		result += m; 
		m1 = k-m; //�����ִ� (�׷�����)���׶�� ���� 
		k1 = n-m; //�����ִ� ī�� ����(���� x)
		result += (k1 - m1);
	}
	
	printf("%d",result);
	return 0;
}
