#include<stdio.h>
#include<stdbool.h>

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int game[20][20];

void reverse(int x,int y)
{
	int i,j,x2 = x,y2 = y;
	bool c;
	for(i = 0; i < 4; i++)
	{
		x2 = x+dx[i],y2 = y+dy[i];
		if(i <= 1)
		{
			while((x2 < 19) && (x2 >= 0))
			{
				game[x2][y2] = !game[x2][y2];
				x2 += dx[i],y2 += dy[i];
			}
		}

		else
		{
			while((y2 < 19) && (y2 >= 0))
			{
				game[x2][y2] = !game[x2][y2];
				x2 += dx[i],y2 += dy[i];
			}
		}
	}
}
int main()
{
	
	int i,j,n,x,y;
	
	for(i = 0; i < 19; i++)
		for(j = 0; j < 19; j++)
			scanf("%d ",&game[i][j]);
	
	scanf("%d",&n);
	for(i = 0 ;i < n; i++)
	{
		scanf("%d %d",&x,&y);
		reverse(x-1,y-1);
	}
		
	for(i = 0; i < 19; i++){
		for(j = 0; j < 19; j++)
			printf("%d ",game[i][j]);
		printf("\n");
	}

			
		
	
	
	return 0;
}
