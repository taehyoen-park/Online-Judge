#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b)   
{
    int num1 = *(int *)a;    
    int num2 = *(int *)b;    

    if (num1 < num2)   
        return -1;      
    
    if (num1 > num2)    
        return 1;       
    
    return 0;    
}

int main()
{
	int n,i,num[100001],sum = 0;
	scanf("%d",&n);
	
	
	for(i = 0;i < n; i++)
	{
		scanf("%d",&num[i]);
	}
	
	if(n == 1)
	{
		printf("%d",num[0]);
		return 0;
	}
	
	qsort(num,n,sizeof(int),compare);
	for(i = 0; i < n-1;i++)
	{
		num[i+1] = num[i] + num[i+1];
		sum += num[i+1];
	}
	printf("%d",sum);
	return 0;
} 
