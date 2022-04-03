#include<stdio.h>
#include<stdbool.h>


int main()
{
	int n,m,j,i,start,end,sum = 0;
	bool basket[12];
	int apple[21];
	
	scanf("%d %d",&n,&m);
	scanf("%d",&j);
	
	for(i = 0; i < m; i++)
		basket[i] = true;
	
	start = 1;
	end = m;	
	for(i = 0; i < j; i++){
		scanf("%d",&apple[i]);
		if(start > apple[i])
		{
			sum += start-apple[i];
			start = apple[i];
			end = start+(m-1);
		}
	
		else if(end < apple[i])
		{
			sum += apple[i]-end;
			end = apple[i];
			start = end-(m-1);
		}	
		else
			sum += 0;
	}
		
	printf("%d",sum);
	return 0;
} 
