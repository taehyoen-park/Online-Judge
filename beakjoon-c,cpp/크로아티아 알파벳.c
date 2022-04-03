#include<stdio.h>
#include<string.h>

int main()
{
	char str[101],*ptr;
	int i,count = 0;
	
	scanf("%s",str); 
	while(1)
	{
		if(strstr(str,"c=") != NULL)
		{
			ptr = strstr(str,"c=");
			strncpy(ptr,"00",2);
			count++;
			continue;
		}
		if(strstr(str,"c-") != NULL)
		{
			ptr = strstr(str,"c-");
			strncpy(ptr,"00",2);
			count++;
			continue;
		}
		if(strstr(str,"dz=") != NULL)
		{
			ptr = strstr(str,"dz=");
			strncpy(ptr,"000",3);
			count++;
			continue;
		}
		if(strstr(str,"d-") != NULL)
		{				
			ptr = strstr(str,"d-");
			strncpy(ptr,"00",2);
			count++;
			continue;
		}
		if(strstr(str,"lj") != NULL)
		{
			ptr = strstr(str,"lj");
			strncpy(ptr,"00",2);
			count++;
			continue;
		}
		if(strstr(str,"nj") != NULL)
		{
			ptr = strstr(str,"nj");
			strncpy(ptr,"00",2);
			count++;
			continue;
		}
		if(strstr(str,"s=") != NULL)
		{
			ptr = strstr(str,"s=");
			strncpy(ptr,"00",2);
			count++;
			continue;
		}
		if(strstr(str,"z=") != NULL)
		{
			ptr = strstr(str,"z=");
			strncpy(ptr,"00",2);
			count++;
			continue;
		}
		break;
	}
	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] != '0')
			count++;
	}
	printf("%d",count);
	return 0;
}
