#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> stairs;
int step1[301];
int step2[301];
int n;

int compare(int a,int b)
{
	if(a > b) return a;
	else return b;
}

int main()
{
	cin.tie(0);
	cin >> n;
	stairs.push_back(0);
	for(int i = 0; i < n;i++)
	{
		int num;
		cin >> num;
		stairs.push_back(num);
	}
	
	step1[1] = stairs[1];
	step2[1] = stairs[1];
	for(int i = 2; i <= n;i++)
	{
		step1[i] = step2[i-1] + stairs[i]; // 한칸으로 왔을때 최대 
		step2[i] = compare(step1[i-2],step2[i-2]) + stairs[i]; // 두칸으로 왔을때 최대 
	}

	int result = compare(step1[n],step2[n]);
	cout << result;
	return 0;
}
