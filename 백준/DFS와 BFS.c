#include<stdio.h>
#include<stdbool.h>
#define MAX 1001

bool Check[MAX];
bool link[MAX][MAX];
int n;

typedef struct Queue{
	int front,rear;
	int data[MAX];
}queue;

void BFS(int start)
{
	int cur,i;
	queue q;
	
	q.front = 0;
	q.rear = 0;
	
	q.data[q.rear++] = start;
	Check[start] = true;
	
	while(q.rear > q.front)
	{
		cur = q.data[q.front++];
		printf("%d ",cur);
		for(i = 1; i <= n; i++)
		{
			if(link[cur][i])
			{	
				if(!Check[i])
				{
					Check[i] = true;
					q.data[q.rear++] = i;
				}
			}	
		}
	}
}

void DFS(int start)
{
	int i;
	Check[start] = true;
	printf("%d ",start);
	
	for(i = 1; i <= n;i++)
	{
		if(link[start][i])
		{
			if(!Check[i])
			{
				Check[i] = true;
				DFS(i);
			}
		}
	}
}
int main()
{
	int m,v,x,y,i;

	scanf("%d %d %d",&n,&m,&v);
	for(i = 1;i <= m;i++)
	{
		scanf("%d %d",&x,&y);
		link[x][y] = true;
		link[y][x] = true;
	}
	
	DFS(v);
	printf("\n");
	for(i = 1; i <= n;i++)
		Check[i] = false;
	BFS(v);
	
	return 0;
}
