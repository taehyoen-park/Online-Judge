#include<stdio.h>

int main()
{
	int k,n,i,temp;
	int A[10001];
	scanf("%d %d",&n,&k);
	
	if(n == k)
	{
		printf("Impossible");
		return 0;
	}
	else if(n == 2)
	{
		if(k == 0)
			printf("2 1");
		else
			printf("1 2");
		return 0;
	}
	for(i = 0; i < n; i++)
		A[i] = i+1;
		
	if(n % 2 == 0)
	{
		if(k % 2 == 0)
		{
			for(i = 0; i < (n-k); i+=2)
			{
				temp = A[i];
				A[i] = A[i+1];
				A[i+1] = temp;
			}
		}
		else
		{
			for(i = 1; i < (n-k); i+=2)
			{
				temp = A[i];
				A[i] = A[i+1];
				A[i+1] = temp;
			}
		}
	}
	
	else
	{
		if(k % 2 == 0)
		{
			for(i = 1; i < (n-k); i+=2)
			{
				temp = A[i];
				A[i] = A[i+1];
				A[i+1] = temp;
			}
		}
		else
		{
			for(i = 0; i < (n-k); i+=2)
			{
				temp = A[i];
				A[i] = A[i+1];
				A[i+1] = temp;
			}
		}
	}
	
	for(i = 0; i < n; i++)
	{
		
		if(i == n-1)
		{
			printf("%d",A[i]);
			break;
		}
		printf("%d ",A[i]);	
	}
	
	return 0;
} 
