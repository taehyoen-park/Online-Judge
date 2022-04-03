#include<stdio.h>

int main()
{
	int n,i,j,count = 0,c = 0;
	char s[51];
	
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		scanf("%s",s);
		for(j = 0 ; s[j] != '\0'; j++)
		{
			if(s[j] == '(')
				count++;
			else
				count--;
			
			if(count < 0)
			{
				printf("NO\n");
				count = 0;
				c = 1;
				break;
			}
			else
				continue;
		}
		if(count != 0 && c == 0)
		{
			printf("NO\n");
			count = 0;
		}
		
		else if(count == 0 && c == 0)
			printf("YES\n");
		
		else
		{
			c = 0;
			continue;
		}
		
	}
	return 0;
}
