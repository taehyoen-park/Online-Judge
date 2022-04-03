#include<stdio.h>
#include<stdlib.h>

//정렬하기위한 비교함수 
int compare(const void *x,const void *y) 
{
	const int a = *(int*)x;
	const int b = *(int*)y;
	if(a > b)
		return 1;
	else if(a < b)
		return -1;
	else
		return 0;
}

//이분탐색 함수 
int binarysearch(int arr[],int num,int n)
{
	int start = 0;
	int end = n-1;
	int mid = (end+start) / 2;
	
	while((end-start) >= 0)
	{
		if(arr[mid] == num)
			return 1;
		else if(arr[mid] < num)
			start = mid+1;
		else
			end = mid-1;
		mid = (end+start) / 2;
	}
	return 0;
}

int main()
{
	int i,n,m,num[100001],num2[100001];
	
	scanf("%d",&n);
	for(i = 0; i < n;i++)
		scanf("%d",num + i);
	
	scanf("%d",&m);
	for(i = 0; i < m; i++)
		scanf("%d",num2 + i);
	
	qsort(num,n,sizeof(int),compare);//배열 A를 정렬한다. 
	
	for(i = 0; i < m;i++)
	{
		if(binarysearch(num,num2[i],n))
			printf("1");
		else
			printf("0");
		if(i != m-1)
			printf("\n");
	}
	
	return 0;
}
