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

typedef struct val{
	int x;
	int num;
}point;

int main()
{
	int i,p[6],sum = 0;
	point arr[10];
	for(i = 0 ;i < 8; i++)
	{
		scanf("%d",&arr[i].x);
		arr[i].num = i+1;
	}
	
	qsort(arr,8,sizeof(point),compare);
	
	for(i = 0 ; i < 5; i++)
	{
		sum += arr[i].x;
		p[i] = arr[i].num;
	}
	qsort(p,5,sizeof(int),compare);
	printf("%d\n",sum);
	for(i = 0; i < 5; i++)
		printf("%d ",p[4-i]);	
	
	return 0;
}
