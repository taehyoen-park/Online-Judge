#include<stdio.h>

int main()
{
	int x,y;
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	if(x > 0 && y > 0)
		printf("%d",1);
		
	if(x < 0 && y > 0)
		printf("%d",2);
		
	if(x < 0 && y < 0)
		printf("%d",3);
		
	if(x > 0 && y < 0)
		printf("%d",4);
	
	return 0;
}
