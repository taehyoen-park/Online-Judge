#include<stdio.h>
#include<stdbool.h>

int m,n,count;
bool Check[9];
int result[9];

void bt(int x)
{
	int i;
	
	if(x == m+1)
	{
		for(i = 1; i <= m; i++)
			printf("%d ",result[i]);
		printf("\n");
		return;
	}
		
	for(i = 1 ;i <= n;i++)
	{
		if(!Check[i])
		{
			Check[i] = true;
			if(result[x] > 0)
				Check[result[x]] = false;
			
			result[x] = i;
			bt(x+1);
		}
		
	}
	
	Check[result[x]] = false;
	result[x] = 0;
}

int main()
{

	scanf("%d %d",&n,&m);
	bt(1);
	return 0;
}
