#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> rgb[3];
int n;

int compare_i(int a,int b,int k)
{
	if(rgb[a][k] < rgb[b][k]) return a;
	else return b;
}

int compare_v(int a,int b)
{
	if(a > b) return b;
	else return a;
}

int main()
{
	cin.tie(NULL);
	cout.tie(0);
	cin >> n;
	
	rgb[0].push_back(0);
	rgb[1].push_back(0);
	rgb[2].push_back(0);
	for(int i = 0; i < n; i++)
	{
		int R,G,B;
		cin >> R >> G >> B;
		rgb[0].push_back(R);
		rgb[1].push_back(G);
		rgb[2].push_back(B);
	}
	
	int rgb0 = compare_i(1,2,n);
	int rgb1 = compare_i(0,2,n);
	int rgb2 = compare_i(0,1,n);
	int check[3] = {rgb0,rgb1,rgb2};

	//1번째집에 n번째 집의 값을 넣음 
	rgb[0][1] += compare_v(rgb[1][n],rgb[2][n]);
	rgb[1][1] += compare_v(rgb[0][n],rgb[2][n]);
	rgb[2][1] += compare_v(rgb[0][n],rgb[1][n]);
	
	for(int i = 2; i < n; i++)
	{
		rgb[0][i] += compare_v(rgb[1][i-1],rgb[2][i-1]);
		rgb[1][i] += compare_v(rgb[0][i-1],rgb[2][i-1]);
		rgb[2][i] += compare_v(rgb[0][i-1],rgb[1][i-1]);
	}
	
	rgb0 = compare_i(1,2,1);
	rgb1 = compare_i(0,2,1);
	rgb2 = compare_i(0,1,1);
	int check2[3] = {rgb0,rgb1,rgb2};
	
	int result[3] = {-1,-1,-1};
	if((check[1] != 0 && check2[0] == 1) || (check[2] != 0 && check2[0] == 2)) result[0] = 0;
	if((check[0] != 1 && check2[1] == 0) || (check[2] != 1 && check2[1] == 2)) result[1] = 1;
	if((check[0] != 2 && check2[2] == 0) || (check[1] != 2 && check2[2] == 1)) result[2] = 2;

	int Min = 1e9;
	for(int i = 0; i < 3; i++)
	{
		if(result[i] != -1)
		{
			if(Min > rgb[result[i]][n-1])
			Min = rgb[result[i]][n-1];
		}
	}
	printf("%d %d %d\n",rgb[0][n-1],rgb[1][n-1],rgb[2][n-1]);
	printf("%d %d %d",result[0],result[1],result[2]);
	//cout << Min;
	return 0;	
} 
