#include<iostream>

using namespace std;
int N;

int div(int x)
{
	int count = 0, num = x;
	while (num % 5 != 0 || num != 0)
	{
		count += num / 5;
		num /= 5;
	}
	return count;
}

int main()
{
	cin >> N;
	
	int s = 5, e = 5e8;

	while (s + 1 < e)
	{
		int mid = (s + e) / 2;
		if (div(mid) < N) s = mid;
		else e = mid;
	}

	while (e % 5 != 0){
		e--;
	}
	if (div(e) == N) cout << e;
	else cout << "-1";
	return 0;
}
