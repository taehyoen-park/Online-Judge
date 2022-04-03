#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct STRING{
	int len;
	char str[51];
}string;

int compare(const void *x, const void *y)
{
	const int a = *(int*)x;
	const int b = *(int*)y;
	if(a > b)return 1;
	else if(a < b)return -1;
	else return 0;
}

int main()
{
	int n,i,j,count = 0;
	string str[20001];
	string temp;
	
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		scanf("%s",str[i].str);
	}
		
	for(i = 0; i < n; i++){
		str[i].len = strlen(str[i].str);
	}
	qsort(str,n,sizeof(string),compare);
	
	for(j = 0; j < n; j++)
	{
		count = 0;
		for(i = 0; i < n-1; i++)
		{
			if(str[i].len == str[i+1].len && strcmp(str[i].str,str[i+1].str) == 1)
			{
				temp = str[i];
				str[i] = str[i+1];
				str[i+1] = temp;
				count = 1;
			}
			else continue;
		}
		if(count == 0)
			break;
	}

	
	for(i = 0; i < n; i++)
	{
		if(strcmp(str[i].str,str[i+1].str) == 0)
			continue;
		
		printf("%s",str[i].str);
		if(i != n-1)
			printf("\n");
	}
	return 0;
} 
