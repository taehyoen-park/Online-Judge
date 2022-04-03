#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if(num1 > num2)
		return 1;
	if(num1 < num2)
		return -1;
	return 0;
}

int main()
{
	int n,l,i,j = 0,count = 1;
	int xy[1000] = { 0, };
	
	scanf("%d %d",&n,&l);
	for(i = 0; i < n; ++i)
		scanf("%d",&xy[i]);
	qsort(xy,n,sizeof(int),compare);
	
	for(i = 1; i < n; i++){
		if((xy[j]+l) <= xy[i]){
			j = i;
			count++;
		}
		
	}
	
	printf("%d",count);
	return 0;
} 
