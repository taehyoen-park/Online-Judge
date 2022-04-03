#include<stdio.h>

int main()
{
	int Stick = 64,i,x,count = 1;
	
	scanf("%d",&x);
	for(i = 0; i < 6; i++)
	{
		if(Stick > x)
			Stick >>= 1;
		
		if(Stick < x)
		{
			count++;
			x -= Stick;
		}
		
		if(Stick == x)
			break;
	}
	printf("%d",count);
	return 0;
}
