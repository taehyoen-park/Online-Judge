#include<stdio.h>
#define person 1000

int main()
{
    int n,k,avr[person],score[person];
    int i,j;
    double avr2[person],sum = 0,count;
    
    scanf("%d",&n);
    
    for(i = 0; i < n;i++)
    {
        scanf("%d",&k);
        for(j = 0;j < k; j++)
        {
            scanf("%d",&score[j]);
            sum += (double)score[j];    
            if(j == k - 1){
                avr[i] = (double)(sum / k);
                sum = 0;               
            }
        }
        for(j=0; j<k; j++)
        {
        	if(avr[i] < score[j])
        	{
        		count++;
			}
			else
			{
				continue;
			}
		}
		
		printf("%.3f%%\n",(double)((count*100) / k));
		count = 0;
	}
    return 0;
}
      
