#include<stdio.h>

int main()
{
	int x,i,y;
	y=0;
	scanf("%d",&x);
	for(i=1;i<=x;x--){
	y+=x;
	if(i==x)
   	printf("%d",y);
    }
    return 0;
}
