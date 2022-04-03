#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000001],exp[40],del[40];	
	char *pt;
	int i = 0,num = 1,pv = 0;
	
	scanf("%s",str);
	scanf("%s",exp);

	if(strlen(str) < strlen(exp))
	{
		printf("%s",str);
		return 0;
	}
	
	for(i = 0;i < strlen(exp);i++){
		del[i] = '-';
	}
	
	while(num)
	{
		pt = strstr(str,exp);
		if(pt == NULL)
			num = 0;
			
		while(pt != NULL)
		{
			strncpy(pt,del,(int)strlen(exp));
			pt = strstr(pt,exp);
		}

		if(num == 0)
			break;
		
		pv = 0;
		for(i = 0; str[i] != '\0';i++)
		{
			if(str[i] == '-')
			{
				strcpy(str+i,str+i+strlen(del));
				i--;
			}
		
		}
	}

	if(strlen(str) == 0)
		printf("FRULA");
	else
		printf("%s",str);
		
	return 0;	
} 
