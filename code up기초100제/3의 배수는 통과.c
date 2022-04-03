#include<stdio.h>

int main()
{
	int x,y,i;
	scanf("%d",&x);
	for(i=0;i<=x;i++){
		if(i%3==0)
		continue;
		
		else
		printf("%d ",i);	
		
	}	
	return 0;
}
