#include<stdio.h>

int main()
{  
    int n,i,k,j;
    int a[100000];
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
    for(j=0;j<n;j++)
	{   
		for(i=1;i<n;i++)
		{
    		if(a[i-1]<a[i])
			{	
       			k=a[i-1];
       			a[i-1]=a[i];
       			a[i]=k;
			}
		}
	}
	 
    printf("%d %d",a[n-1],a[0]);
    return 0;
}
