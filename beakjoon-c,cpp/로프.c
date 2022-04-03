#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b)    
{
    int num1 = *(int *)a;    
    int num2 = *(int *)b;    

    if (num1 > num2)    
        return -1;     
    
    if (num1 < num2)   
        return 1;       
    
    return 0;           
}

int main()
{
    const int roofcount = 100000;
    int num = 0;
    int i,j,n,temp;
    int roof[roofcount];
    
    scanf("%d",&n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%d",roof + i);
    }
        
    qsort(roof,sizeof(int) * n/sizeof(int),sizeof(int),compare);
    
    for(i = 0; i < n; i++)
    {
        if(roof[i] * (i + 1) > num )
        {
			num = roof[i] * (i + 1);
        } 
    }

    printf("%d",num);
    
    return 0;
}
