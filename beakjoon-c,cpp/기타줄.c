#include<stdio.h>
#define fixnum 2

int main()
{
	int n,m,i;
	int min = 0,num = 0, num2 = 0, num3 = 0, num4; // 1<=n<=100, 1<=m<=50
	int price[50][fixnum];
	
	scanf("%d %d",&n,&m);
	
	for(i = 0; i < m; i++)
	{
		scanf("%d %d",&price[i][0],&price[i][1]);
	}
	
	if(n >= 6)
	{
		num = n / 6;
		
		for(i = 0; i < m; i++) //��Ű���� ���� �� 
		{
			if(price[min][0] >= price[i][0])
			{
				min = i;
				num2 = price[i][0];
			}
		}	
		 
		for(i = 0; i < m; i++) //����*6�� ���� ��
		{
			if(price[min][1] * 6 >= price[i][1] * 6)
			{
				min = i;
				num4 = price[i][1] * 6;
			}
		}
		 
		if(num2 > num4) //���� ������ ���� ��
			num3 += num4 * num;
		else
			num3 += num2 * num;
	
		n %= 6;
	}
	
	if(n < 6 && n >= 1)
	{
		
		for(i = 0; i < m; i++) //����*n�� ���� �� 
		{
			if(price[min][1] >= price[i][1])
			{
				min = i;
				num2 = price[i][1];
			}
		}
		
		for(i = 0; i < m; i++) //��Ű�� ���ݺ� 
		{
			if(price[min][0] >= price[i][0])
			{
				min = i;
				num4 = price[i][0];
			}
		}
		 
		if(num2 * n > num4) //���� ������ ���� ��
			num3 += num4;
		else
			num3 += num2 * n;
	}
	
	printf("%d",num3);
	
	return 0;
}
