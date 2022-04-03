#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n,i,j,count = 0;
	int *num = malloc(sizeof(int)*26);
	char str[101][101];
	
	
	scanf("%d",&n);
	
	count = n; 
	memset(num,0,sizeof(int)*26);
	for(i = 0; i < n; i++)
		scanf("%s",str[i]);
		
	for(i = 0; i < n; i++){
		for(j = 0; str[i][j] != '\0'; j++){
			if(num[str[i][j]-97] == 0)
				num[str[i][j] - 97] = 1;
				
			else if(num[str[i][j]-97] == 1 && str[i][j-1] == str[i][j])
				continue;
			
			else{
				count--;
				break;
			}
	
		}
		free(num);
		num = malloc(sizeof(int)*26);
		memset(num,0,sizeof(int)*26);
	}
	
	
	printf("%d",count);
	free(num);
	return 0;
}
