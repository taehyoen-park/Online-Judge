#include<stdio.h>

int main()
{  
    int n,i,k,j;
    int m=1;
    int a[100000];
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=1;i<n;i++,m++)
	{
    if(a[i-1]<a[i])
		{
    		k=a[i-1];
    		a[i-1]=a[i];
    		a[i]=k;
    	if(i>=2&&a[i-1]>a[i-m])
	    	{
    			j=a[i-m];
    			a[i-m]=a[i-1];
    		   	a[i-1]=j;
        	}
		}
	}
    printf("%d %d",a[n-1],a[0]);
    return 0;
}
