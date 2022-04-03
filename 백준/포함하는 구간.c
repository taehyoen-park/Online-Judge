#include<stdio.h>

int compare(const void **a, const void **b)   
{
    int num1 = **(int **)a;    
    int num2 = **(int **)b;    

    if (num1 < num2)   
        return -1;      
    
    if (num1 > num2)    
        return 1;       
    
    return 0;    
}

int main()
{
	int temp2,i,j,n,c = 0,k = 0;
	int *arr[25000];
    int arr2[25000][2];
    
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		scanf("%d %d",&arr2[i][0], &arr2[i][1]);
	}
	
	for(i=0; i<n; i++){
        arr[i] = &arr2[i][0];
    }
    
    qsort(arr,n,sizeof(int*),compare);
    
    for(i = 0; i < n; i++){
    	for(j = i; j < n; j++)
    	{
    		if(arr[i][1] >= arr[j][1])
    		{
    			c += 1;
			}
		}
		if(k < c)
		{
			k = c;
			c = 0;
			continue;
		}
		else
		{
			c = 0;
		}
	}
	
	printf("%d",k-1);
	
	return 0;
}
