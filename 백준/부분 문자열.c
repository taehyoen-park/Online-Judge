#include<stdio.h>
#include<string.h>

int main()
{
	char s[100001];
	char t[100001];
	char *ch;
	int d1,d2;
	int i,num = 0;
	
	while(scanf("%s %s",s,t)){
		for (i = 0; i < strlen(s)+1;i++)
		{
			d1 = strcspn(t,s[i]);
		    if(ch != '\0')
		    {
		    	if(ch2 < ch && ch2 != '\0')
		    	{
		    		printf("NO\n");
		    		num = 1;
		    		break;
				}
		    		
		    	ch2 = ch;
		    	continue;
			}
		    	
		
		    else
		    {
		    	printf("NO\n");
		    	num = 1;
		    	break;
			}
			
    
		}
		if(num == 0)
			printf("YES\n");
		else
			num == 0;
    }
	return 0;
}
