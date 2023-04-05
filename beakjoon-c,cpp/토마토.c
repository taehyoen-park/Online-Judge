#include<stdio.h>
#include<stdbool.h>

int n,m,rear = -1,front = -1,count = 0,cur = 0,tomorrow = 0,day = -1;
int dx[4] = {-1,1,0,0},dy[4] = {0,0,-1,1};
int tmt[1002][1002];
bool Check[1002][1002];

typedef struct NODE{
	int x,y;
}node;

node q[1000000];
void enqueue(int x,int y)
{
	if(Check[x][y])
		return;
	if(tmt[x][y] == -1 || tmt[x][y] == 1)
		return;
	if(x < 1 || x > n || y < 1 || y > m)
		return;
	if(tmt[x][y] == 0)
	{
		tmt[x][y] = 1;
		count--;
	}
		
	rear++;
	tomorrow++;
	q[rear].x = x;
	q[rear].y = y;
	Check[q[rear].x][q[rear].y] = true;
	return;
}

void dequeue()
{
	if(rear >= front)
	{
		front++;
		cur--;
		if(cur == 0)
			day++;
	}
}

int BFS()
{
	if(rear < front)
		return -1;
	
	dequeue();
	while(rear >= front){
		int x,y,i;
		x = q[front].x;
		y = q[front].y;
		for(i = 0; i < 4; i++)
			enqueue(x+dx[i],y+dy[i]);
		if(cur == 0)
		{
			cur = tomorrow;
			tomorrow = 0;
		}
			
		dequeue();
	}
	return day;
}

int main()
{
	int i,j,result;
	
	scanf("%d %d",&m,&n);
	for(i = 1; i <= n; i++){
		for(j = 1; j <= m; j++)
		{
			scanf("%d",&tmt[i][j]);
			if(tmt[i][j] == 1)
			{
				rear++;	
				cur++;
				q[rear].x = i,q[rear].y = j;
			}
			if(tmt[i][j] == 0)	
				count++;
		}
	}
	
	if(count == 0)
	{
		printf("0");
		return 0;
	}
		
	result = BFS();
	
	if(count > 0)	
		printf("-1");
	else
		printf("%d",result);
	
	return 0;
}
