#include<stdio.h>
#include<stdlib.h>


long long count,k,n;

int compare(const void *x,const void *y)
{
	long long a = *(long long*)x;
	long long b = *(long long*)y;
	if(a > b)
		return 1;
	else if(a < b) 
		return -1;
	else
		return 0;	
}

long long search(long long arr[],long long start,long long end)
{
	int i;

	while(start <= end)
	{
		long long middle = (start+end)/2;
		count = 0;
		
		for(i = 0; i < k; i++)
			count += (arr[i] / middle);
		
		if(count < n)
			end = middle-1;
		else
			start = middle + 1;
	}
	return end;
}

int main()
{
	int i,j;
	long long arr[10001];
	
	scanf("%d %d",&k,&n);
	for(i = 0; i < k; i++)
		scanf("%lld",arr+i);
	qsort(arr,k,sizeof(long long),compare);
	
	printf("%lld",search(arr,1,arr[k-1]));
	return 0; 
}
