#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compare(const void *x,const void *y)
{
	int a = *(int*)x;
	int b = *(int*)y;
	if(a > b)
		return 1;
	else if(a < b)
		return -1;
	else
		return 0;
}

int BinarySearch_DOWN(int arr[],int x,int y,int num)
{
	int start = x,end = y,i,j;
	int middle = (start+end)/2;
	
	while(start < end)
	{
		if(arr[middle] >= num)
			end = middle;
		else 
			start = middle+1;
	
		middle = (start+end)/2;
	}
	return end;
}

int BinarySearch_UP(int arr[],int x,int y,int num)
{
	int start = x,end = y,i,j;
	int middle = (start+end)/2;
	
	while(start < end)
	{
		if(arr[middle] > num)
			end = middle;
		else 
			start = middle+1;
	
		middle = (start+end)/2;
	}
	return end;
}

int main()
{
	int n,m,i,j = 0,count;
	int *card,*Mcard;
	
	scanf("%d",&n);
	card = (int*)malloc(sizeof(int)*n);
	for(i = 0; i < n; i++)
		scanf("%d",&card[i]);
	qsort(card,n,sizeof(int),compare);
	
	scanf("%d",&m);
	Mcard = (int*)malloc(sizeof(int)*m);
	for(i = 0; i < m; i++)
		scanf("%d",&Mcard[i]);
	
	for(i = 0; i < m; i++)
	{
		count = BinarySearch_UP(card,0,n,Mcard[i]) - BinarySearch_DOWN(card,0,n,Mcard[i]);
		printf("%d ",count);
	}
	
		
	return 0;
}
