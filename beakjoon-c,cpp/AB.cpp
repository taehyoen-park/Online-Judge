#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool check(int n,int k);
string getstr(int n);
int main()
{
	int n,k;
	
	scanf("%d %d",&n,&k);
	if(check(n,k)) return 0;
	string str = getstr(n);
	
	int count = 0,num = n/2;
	char temp;
	for(int i = num,p = 0,j; i > 0; i--,p++){
		for(j = n-i; j > p; j--)
		{
			if(count == k)break;
			temp = str[j];
			str[j] = str[j-1];
			str[j-1] = temp;
			count++;
		}
	}
	printf("%s",str.c_str());
	return 0;
}

bool check(int n,int k)
{
	int num = n/2;
	if(n % 2 == 0)
	{
		if(num * num < k)
		{
			printf("-1");
			return true;
		}
	}
	else
	{
		if(num * (num+1) < k)
		{
			printf("-1");
			return true;
		}
	}
	return false;
}

string getstr(int n)
{
	string str = "";
	for(int i = 0; i < n; i++)
	{
		if(n % 2 == 0){
			if(i < n/2) str += "B";
			else str += "A";
		}
		else{
			if(i > n/2) str += "A";
			else str += "B";
		}
	}
	return str;
}
