#include<stdio.h>

int main()
{
    int a,b,n,i;
    int q[5] = { 0 },axis = 0;
    
    scanf("%d",&n);
    for(i = 0; i < n; i++)
	{
        scanf("%d %d",&a,&b);
    
    
    	if(a > 0)
  		{
        	if(b > 0)
            	q[1]++;
        	else if(b < 0)
            	q[4]++;
        	else
        		axis++;
    	}
    
    	else if(a < 0)
    	{
        	if(b > 0)
            	q[2]++;
        	else if(b < 0)
            	q[3]++;
        	else
        		axis++;
    	}
    
    	else
        	axis++;
    }
    
    for(i = 1; i <= 4; i++)
    {
        printf("Q%d: %d\n",i,q[i]);
    }
    printf("AXIS: %d",axis);
    
    return 0;
}
