#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000001];
	char* p_str;
	int count = 0;
	
	gets(str);
	p_str = strtok(str," ");
	while(p_str != NULL)
	{
		++count;
		p_str = strtok(NULL," ");
	}
	printf("%d",count);
	return 0;
}
