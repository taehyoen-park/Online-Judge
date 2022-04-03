#include<stdio.h>
#include<stdlib.h>

int compare(const void *x,const void *y)
{
	int a = *(int*)x;
	int b = *(int*)y;
	if(a > b)
		return -1;
	else if(a < b)
		return 1;
	else
		return 0;
}

int main()
{
	int n,i;
	int *arr;
	
	scanf("%d",&n);
	arr = malloc(sizeof(int)*n);
	for(i = 0; i < n; i++)
		scanf("%d",arr+i);
	
	qsort(arr,n,sizeof(int),compare);
	
	for(i = 0; i < n; i++)
		printf("%d\n",arr[i]);
		
	return 0;
	
}
