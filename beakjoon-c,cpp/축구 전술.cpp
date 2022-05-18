#include<iostream>
#include<algorithm> 
#include<vector>
#include<stack>
#define MAX 100002

using namespace std;

vector<vector<int>> SCC;  //SCC는 몇개가 있는지 모른다. 
vector<vector<int>> node; //연결정보를 담는다. 
int ID_arr[MAX],ID;    // 각데이터들은 ID를 갖는다. 
int SCCid_arr[MAX],SCCid; //SCC들도 SCC만에 ID를 갖는다.  ID는 해당SCC가 몇번째인지 알면 그 번수에 +1 
int indegree[MAX]; 	// 각각의 SCC의 진입차수  
bool finish[MAX]; 	// SCC로묶어진 데이터들은 완료처리를 한다. 
stack<int> s; 	// SCC를 만들기위한 도구  

int DFS(int x)
{
	ID_arr[x] = ID++;
	s.push(x);
	int arrive = ID_arr[x];
	for(unsigned int i = 0; i < node[x].size(); i++)
	{
		int index = node[x][i];
		if(ID_arr[index] == 0) arrive = min(arrive,DFS(index));
		else if(!finish[index]) arrive = min(arrive,ID_arr[index]);
	}
	
	if(arrive == ID_arr[x])
	{
		vector<int> scc;
		while(1)
		{
			int t = s.top();
			s.pop();
			SCCid = SCC.size() + 1;
			finish[t] = true;
			SCCid_arr[t] = SCCid;
			scc.push_back(t);
			if(t == x) break;
		}
		SCC.push_back(scc);
	}
	return arrive;
}

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,m;
		scanf("%d %d",&n,&m);
		
		SCC.clear();
		node.clear();
		node.assign(n+2,vector<int>(0));
		fill(ID_arr,ID_arr + MAX, 0);
		fill(SCCid_arr,SCCid_arr + MAX, 0);
		fill(indegree,indegree + MAX, 0);
		fill(finish,finish + MAX, false);
	
		//연결 정보를 입력 
		for(int i = 0; i < m; i++)
		{
			int x,y;
			scanf("%d %d",&x,&y);
			node[++x].push_back(++y);
		}
		
		//노드의 수만큼 DFS를 한다(SCC만들기) 
		for(int i = 1; i <= n; i++){
			if(!finish[i]) DFS(i);
		}
		
		//연결정보를 순회하면서 SCC의 진입차수를 계산한다. 
		for(int i = 1; i <= n; i++){
			for(int& v : node[i]){
				if(SCCid_arr[i] != SCCid_arr[v])
					indegree[SCCid_arr[v]]++;
			}
		}
		
		int count = 0,peek = 0;
		//printf("%d",SCC.size());
		for(int i = 1; i <= SCC.size(); i++)
		{
			if(indegree[i] == 0)
			{
				count++;
				peek = i;
			}
		}
		
		if(count >= 2) printf("Confused\n\n");
		else{
			sort(SCC[peek-1].begin(),SCC[peek-1].end());
			for(int& value : SCC[peek-1])
				printf("%d\n",value-1);
			printf("\n");
		}
	}
	return 0;
}
