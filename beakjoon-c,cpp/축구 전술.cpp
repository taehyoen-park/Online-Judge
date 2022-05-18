#include<iostream>
#include<algorithm> 
#include<vector>
#include<stack>
#define MAX 100002

using namespace std;

vector<vector<int>> SCC;  //SCC�� ��� �ִ��� �𸥴�. 
vector<vector<int>> node; //���������� ��´�. 
int ID_arr[MAX],ID;    // �������͵��� ID�� ���´�. 
int SCCid_arr[MAX],SCCid; //SCC�鵵 SCC���� ID�� ���´�.  ID�� �ش�SCC�� ���°���� �˸� �� ������ +1 
int indegree[MAX]; 	// ������ SCC�� ��������  
bool finish[MAX]; 	// SCC�ι����� �����͵��� �Ϸ�ó���� �Ѵ�. 
stack<int> s; 	// SCC�� ��������� ����  

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
	
		//���� ������ �Է� 
		for(int i = 0; i < m; i++)
		{
			int x,y;
			scanf("%d %d",&x,&y);
			node[++x].push_back(++y);
		}
		
		//����� ����ŭ DFS�� �Ѵ�(SCC�����) 
		for(int i = 1; i <= n; i++){
			if(!finish[i]) DFS(i);
		}
		
		//���������� ��ȸ�ϸ鼭 SCC�� ���������� ����Ѵ�. 
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
