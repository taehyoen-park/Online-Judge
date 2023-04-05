#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstring>

using namespace std;

char board[3][3];
string result = "";
queue<pair<pair<string, int>, int>> q;
int Min = 9999;

bool check(string& str)
{
	if (str == result)return true;
	else return false;
}

char* touch(const string& str, int x)
{
	int dx[4] = { 1,-1,0,0 };
	int dy[4] = { 0,0,1,-1 };
	int k = 0, n = x / 3, m = x % 3;
	copy(&str[0], &str[0] + 9, board[0]);

	
	if (board[n][m] == '.') board[n][m] = '*';
	else board[n][m] = '.';
	for (int i = 0; i < 4; i++)
	{
		int px = n + dx[i];
		int py = m + dy[i];

		if ((px < 0 || px > 2) || (py < 0 || py > 2))continue;
		else
		{
			if (board[px][py] == '.') board[px][py] = '*';
			else board[px][py] = '.';
		}
	}
	
	return board[0];
}

void bfs(string str, int x)
{
	string str1 = str;
	string str2 = touch(str, x);
	q.push({ {str1,0},x });
	q.push({ {str2,1},x });

	while (!q.empty())
	{
		string s = q.front().first.first;
		int count = q.front().first.second;
		int a = q.front().second;
		q.pop();

		if (check(s))
		{
			if (Min > count) Min = count;
		}

		if (a >= 8) continue;
		touch(s, a + 1);
		q.push({ {touch(s,a + 1),count + 1},a + 1 });
		q.push({ {s,count},a + 1 });
	}
}

int main()
{
	int t;

	cin >> t;
	while(t--)
	{
		string white = ".........";
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cin >> board[i][j];
			}
		}
		result += board[0];

		bfs(white, 0);
		cout << Min << "\n";

		Min = 9999;
		result.clear();
		q = queue<pair<pair<string, int>, int>>();
	}

	return 0;
}
