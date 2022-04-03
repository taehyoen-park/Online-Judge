#include<stdio.h>
#include<string.h>

int main()
{
	int n,i,j;
	char str[51][51];
	
	scanf("%d",&n);
	for(i = 0; i < n;i++)
		scanf("%s",str[i]);
	
	for(i = 0 ;i < n-1; i++){
		for(j = 0; str[i+1][j] != '\0';j++)
		{
			if(str[0][j] != str[i+1][j] && str[0][j] != '?')
				str[0][j] = '?';
			
			else
				continue;
		}
	}
	printf("%s",str[0]);
	return 0;	
} 
