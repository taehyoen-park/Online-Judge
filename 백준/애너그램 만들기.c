#include<stdio.h>

int main()
{
	int i,count = 0,arr[25] = { 0, };
	int snum,s2num;
	char s[1001],s2[1001];
	
	scanf("%s",s);
	scanf("%s",s2);
	for(i = 0; s[i] != '\0'; i++)
		arr[(s[i]-97)]++;
	snum = i;
	
	for(i = 0; s2[i] != '\0'; i++)
	{
		if(arr[(s2[i]-97)] > 0)
			arr[(s2[i]-97)]--;
		
		else
			count++;
	}
	s2num = i;
	
	printf("%d",count+(snum-(s2num-count)));
	
	return 0;
} 
