#include<stdio.h>

int main()
{
	int x,y=0,c=0,z=0;
	scanf("%d",&x);
	while(c!=x&&c<x){
		y++;
		c+=y;
		z=y;
		if(c>=x)
			break;
		}
	printf("%d",z);
	
	return 0;
}
