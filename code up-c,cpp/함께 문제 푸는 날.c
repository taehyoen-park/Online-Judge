#include<stdio.h>

int main()
{
	int a,b,c,d=1;
	scanf("%d %d %d",&a,&b,&c);
	
	while(d%a!=0||d%b!=0||d%c!=0){
		d++;
	}	
	printf("%d",d);
	return 0;
}

