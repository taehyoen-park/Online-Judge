#include<stdio.h>

int main()
{
	int n,i,num = 0,hap = 0;
	char number[101];
	
	scanf("%d",&n);
	
	scanf("%s",number);
	
	for(i=0; i<n; i++)
	{
		hap += number[i] % 48;
	}
	printf("%d",hap);
	return 0;	
} 
