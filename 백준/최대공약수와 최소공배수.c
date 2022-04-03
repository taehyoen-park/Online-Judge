#include<stdio.h>

int main()
{
	int n,m,num = 1,n2,m2,i,j,temp;
	int GCD,LCM;
	scanf("%d %d",&n,&m);
	
	//무조건 n이 크게 설정한다. 
	if(n < m)
	{
		temp = n;
		n = m;
		m = temp;
	}
	
	n2 = n,m2 = m;
	while(num != 0)
	{
		num = n2 % m2;
		n2 = m2; 
		m2 = num;
	}
	GCD = n2;
	
	if(n == m)
	{
		printf("%d\n%d",m,m);
		return 0;
	}
	for(i = 1,j = 1; n != m;i++)
	{
		if(n*j > m*i)
			continue;	
		else if(n*j < m*i)
		{
			while(n*j < m*i){
				++j;
			}	
			if(n*j  == m*i)
			{
				LCM = i*m;
				break;
			}
		}
		else
		{
			LCM = i*m;
			break;
		}
	}
	
	printf("%d\n%d",GCD,LCM);
	return 0; 
}
