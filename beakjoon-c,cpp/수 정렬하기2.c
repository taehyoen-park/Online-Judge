#include<stdio.h>
#include<stdlib.h>
#define count 1000000

int compare(const void *x, const void *y)
{
	int num1 = *(int*)x;
	int num2 = *(int*)y;
	
	if(num1 < num2)
		return -1;
		 
	if(num1 > num2)
		return 1;
		
	return 0;
}

int main()
{
	int n,i;
	int arr[count];
	
	scanf("%d",&n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d",arr + i);
	}
	
	qsort(arr,sizeof(int) * n / sizeof(int),sizeof(int),compare);

	for(i = 0; i < n; i++)
	{
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
