#include<stdio.h>
#include<stdlib.h>

int main()
{
	char channel[6];
	int c2[6];
	int n,k,i;
	int nowc = 100;
	int num[10] = {0,1,2,3,4,5,6,7,8,9}; 
	
	scanf("%s",&channel); //����ä�� ���� 
	scanf("%d",&n); // ������ ä�� ���� 
	
	for(i = 0;channel[i] != '\0'; i++) //����ä���� ����ä�η� �ٲ� 
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
