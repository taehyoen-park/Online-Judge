#include<stdio.h>

int maze[11][11];
int go(int x,int y)
{
	for(;maze[x][y+1] == 1 && x < 9; x++)
	{
		if(maze[x][y] == 2)
			return x;
		else
			maze[x][y] = 9;
	}
	if(x != 9 && maze[x][y] != 2)
		maze[x][y] = 9;
	return x;
}
int main()
{
	
	int x,y;
	for(x = 0; x < 10; x++){
		for(y = 0; y < 10; y++)
			scanf("%d",&maze[x][y]);
	}
	for(y = 1,x = 1; y < 9; y++)
	{
		if(maze[x][y] == 2)
			break;
			
		if(maze[x][y+1] == 1)
		{
			maze[x][y] = 9;
			x = go(x,y);
			if(maze[x][y] == 2)
				break;
			else
				continue;
		}
		else
			maze[x][y] = 9;
	}
	
	if(y != 9)
		maze[x][y] = 9;
	for(x = 0; x < 10; x++){
		for(y = 0; y < 10; y++)
			printf("%d ",maze[x][y]);
		printf("\n");
	}
	return 0;
}
