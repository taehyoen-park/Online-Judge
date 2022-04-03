#include<stdio.h>
#include<stdlib.h>

int compare(const void *x, const void *y)
{
	const int a = *(int*)x;
	const int b = *(int*)y;
	if(a > b)return 1;
	else if(a < b)return -1;
	else return 0;
}

int main()
{
	int n,k,i,j,A[10001],B[10001];
	int count = 0,num = 0,p = 0,l,r,c = 0;

	scanf("%d",&n);
	for(i = 1,k = 0; i <= n;i++,k++)
	{
		A[k] = ((i+1)*(i+1))-(i*i);
	}
		
	
	printf("%d\n",A[0]);
	scanf("%d",&k);
	if(n == 1)
	{
		printf("1");
		return 0;
	}
	for(i = 0; i < n; i++)
	{
		count++;
		if(k == count)
		{
			printf("%d",(i+1)*(i+1));
			return 0;
		}
		count += A[i];
		if(k <= count)
		{
			p = i;
			break;
		}
	}
	
	count = count - A[p];
	num = p+1; 
	l = (num)*(num);
	r = (num+1)*(num+1);
	
	for(i = num,j = 0;i <= n;i++)
	{
		c = j;
		if(l < num*i && num*i < r)
		{
			if((num-1)*i < num*i && (l <= (num-1)*i && (num-1)*i < r))
			{
				B[j] = (num-1)*i;
				j++;
				B[j] = num*i;
				j++;
			}
			else
			{
				B[j] = num*i;
				j++;
			}
				
		}
		
		else
		{
			if(l <= (num-1)*i && (num-1)*i < r)
			{
				B[j] = (num-1)*i;
				j++;
			}	
		}
		
		if((num-1)*i > r)
			break;
	}
	
	qsort(B,c+1,sizeof(int),compare);

	for(i = 0;i < c+1;i++)
	{
		count+=2;
		if(count >= k)
		{
			printf("%d",B[i]);
			break;
		}
	}
	
	return 0;	
}
