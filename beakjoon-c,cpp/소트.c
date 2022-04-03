#include<stdio.h>

int main()
{
	int count,n,s,i,j,k,max,A[51];
	
	scanf("%d",&n);
  	for(i = 0; i < n; i++) 
		scanf("%d",A+i); 
  	scanf("%d",&s); 
  	
  	count = s;
  	for(i = 0; i < n && count != 0; i++) 
	{ 
  		max = A[i];
		k = i; 
  		for(j = i + 1; j <= i + count && j < n; j++)
  		{
  			if(max < A[j])
			{
  				max = A[j];
				k = j;
			}
		}
		
		count -= k - i;
		while(k > i)
		{
			A[k] = A[k-1];
			k--; 
		}
		A[i] = max; 
	} 
	
  	for(i = 0; i < n; i++) 
  		printf("%d ", A[i]); 
   
}


