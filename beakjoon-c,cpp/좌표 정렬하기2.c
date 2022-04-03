#include<stdio.h>
#include<stdlib.h>

typedef struct POINT{
	int y;
	int x;
}point; 
int compare(const void *a,const void *b)   
{
    int num1 = *(int*)a;    
    int num2 = *(int*)b;    
	const int *p = a,*p2 = b;
	
    if (num1 > num2)   
        return 1;      
    else if (num1 < num2)    
        return -1;      
    else
    {
    	if (*(p+1) > *(p2+1))   
        	return 1;      
    
    	else if (*(p+1) < *(p2+1))    
        	return -1; 
    	else
    		return 0;
	} 
}

int main()
{ 
    point arr[100001];
	int i,j,n,temp2;
	
	scanf("%d",&n);
	
	for(i = 0; i < n;i++)
		scanf("%d %d",&arr[i].x,&arr[i].y);	
    qsort(arr,n,sizeof(point),compare);
    
	for(i = 0 ;i < n; i++)
		printf("%d %d\n",arr[i].x,arr[i].y);
	

	return 0;
}
