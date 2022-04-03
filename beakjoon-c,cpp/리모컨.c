#include<stdio.h>
#include<stdlib.h>

int main()
{
	char channel[6];
	int c2[6];
	int n,k,i;
	int nowc = 100;
	int num[10] = {0,1,2,3,4,5,6,7,8,9}; 
	
	scanf("%s",&channel); //정수채널 선언 
	scanf("%d",&n); // 금지할 채널 개수 
	
	for(i = 0;channel[i] != '\0'; i++) //문자채널을 정수채널로 바꿈 
		c2[i] = channel[i] - 48;
	
	for(i = 0;i < n; i++)
	{
		scanf("%d",&k);
		num[k] = -1;
	}
	
	for(i = 0;; i++)
	{
		if(num[i] >= 0)
		
	}
	


	
	return 0;
}
