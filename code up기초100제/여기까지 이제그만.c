#include<stdio.h>

int main()
{
	long long int x,i,y=0;
	scanf("%lld",&x);
	for(i=0;i<=x;i++){
		y+=i;
		if(y>=x)
		break;
	}		
	printf("%lld",y);
	
	return 0;
}
