#include<stdio.h>
#include<stdbool.h>
#define MAX 101

int n,m,front = -1,rear = -1;
int dx[4] = {1,-1,0,0},dy[4] = {0,0,1,-1};

bool Check[MAX][MAX];

typedef struct NODE
{
	int x,y;
	int count;
}node;

node q[10001];

void enqueue(int x,int y,int count)
{
	if(!Check[x][y])
		return;
	if(x < 1 || x > n || y < 1 || y > m)
		return;
	if(Check[x][y])
	{
		Check[x][y] = false;
		rear++;
		q[rear].count = ++count;
		q[rear].x = x;
		q[rear].y = y;
	}
}

node dequeue()
{
	if(rear != front)
	{
		front++;
		return q[front];
	}
}

int BFS(int x,int y)
{
	int i,a = x,b = y,c = 0;
	
	enqueue(a,b,c);
	Check[x][y] = false;
	while(front != rear)
	{
		node tem;
		tem = dequeue();
		if(tem.x == n && tem.y == m)
			return tem.count;
		
		for(i = 0; i < 4; i++)
			enqueue(tem.x + dx[i],tem.y + dy[i],tem.count);

	}

}
int main()
{
	int i,j;
	char str[MAX];
	
	scanf("%d %d",&n,&m);
	for(i = 1; i <= n;i++)
	{
		scanf("%s",str);
		for(j = 0; j < m;j++)
			Check[i][j+1] = (int)str[j]-48;
		
	}
	printf("%d",BFS(1,1));

	return 0;
}


