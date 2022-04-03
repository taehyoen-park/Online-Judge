#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
	int num = *(int*)a;
	int num2 = *(int*)b;
	if(num < num2)
		return -1;
	if(num > num2)
		return 1;
	return 0;
}

int main()
{
	int n,i;
	int arr[51];
	
	scanf("%d",&n);
	for(i = 0; i < n; i++)
		scanf("%d",&arr[i]);
	qsort(arr,n,sizeof(int),compare);
	
	if(n % 2 == 0)
		printf("%d",arr[0]*arr[n-1]);
	else
		printf("%d",arr[(n/2)]*arr[(n/2)]);
		
	return 0;
}
