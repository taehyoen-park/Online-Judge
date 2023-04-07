#include<iostream>

using namespace std;

//1부터 n까지의 합을 반환 
long long Sum(long long n)
{
	return (n*(n+1)) / 2;
}

int main()
{
	long long s;
	cin >> s;
	
	long long result = 0,i;
	for(i = 1; result <= s; ++i)
	{
		result = Sum(i+1); 
	}

	cout << i-1;
	return 0;
}
