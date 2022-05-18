#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 102

using namespace std;

const int INF = 1000000000;
int graph[MAX][MAX];
int item[MAX];
int n,m,r;

void floydWarshall()
{	
	for(int k = 1; k <= n; k++){
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(graph[i][k]+graph[k][j] < graph[i][j])
					graph[i][j] = (graph[i][k]+graph[k][j]);
				else continue;  
			}
		}
	}
	return;
}	

int main()
{
	scanf("%d %d %d",&n,&m,&r);
	fill(&graph[1][1],&graph[MAX][MAX],INF);
	
	for(int i = 1; i <= n; i++)
		graph[i][i] = 0;
		
	for(int i = 1; i <= n; i++){
		int k;
		scanf("%d",&k);
		item[i] = k;
	}
	
	for(int i = 0; i < r; i++)
	{
		int start,arrive,cost;
		scanf("%d %d %d",&start,&arrive,&cost);
		graph[start][arrive] = cost;
		graph[arrive][start] = cost;
	}
	floydWarshall();
	
	int Max = -1,sum = 0;
	for(int i = 1; i <= n; i++){ //ÂøÁö 
		for(int j = 1; j <= n; j++){ // °¡´Â°÷ 
			if(graph[i][j] <= m)
				sum += item[j];
		}
		Max = max(Max,sum);
		sum = 0;
	}
	
	printf("%d",Max);
	return 0;
}
