#include<stdio.h>


int main()
{
	int n,i,a[10000];
	int x=1000000;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
		if(a[i]<x)
			x=a[i];
	}

	printf("%d",x);
	return 0;
} 
