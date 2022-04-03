#include<stdio.h>
#include<stdlib.h>
 
int compare(const void *x,const void *y)
{
	const int a = *(int*)x;
	const int b = *(int*)y;
	
	if(a > b)
		return -1;
	else if(a < b)
		return 1;
	else
		return 0;
}

int main()
{
	int n,i,num = 0;
	int A[101],B[101];
	
	scanf("%d",&n);
	
	for(i = 0; i < n;i++){
		scanf("%d",&A[i]);
	}
	
	for(i = 0; i < n;i++){
		scanf("%d",&B[i]);
	}
	
	qsort(A,n,sizeof(int),compare);
	qsort(B,n,sizeof(int),compare);

	for(i = 0; i < n; i++){
		num += A[n-1-i]*B[i];
	}
	
	printf("%d",num);
	return 0;
 } 
