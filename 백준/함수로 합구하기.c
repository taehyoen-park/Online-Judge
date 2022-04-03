#include<stdio.h>

long long sum(int *a, int n)
{
	long long ans = 0;

	ans = *a;
	
	return ans;

}

int main()
{
    const int fixnum = 300000;
    
    int A[fixnum];
    int n,i,sum2;
    
    scanf("%d",&n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%d",A[i]);
    }
    
    for(i = 0; i < n;i++)
	{
		sum2 += A[i];
		
		if(i == n-1)
		{
			break;
		}
	}
    
    printf("%d",sum(&sum2,n));
    
    return 0;
}
