#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;

	string num = "666";
	string num2 = "";
	int a1 = 1,a2 = 1,b = 0;
		
	if(n == 1)
	{
		cout << num;
		return 0;
	}
	for(int i = 1,count = 2; count <= n;i++,count++)
	{
		a1 = i;
		while(a1 != 0)
		{
			a2 = a1%10;
			if(a2 == 6)
				b++;
			else
			{
				num2 = to_string(a1);
				break;
			}
			a1 /= 10;
		}
		if(b > 0)
		{
			for(int j = 0; j < pow(10,b) && count <= n; j++,count++)
			{
				if(count == n)
				{
					string num3 = to_string(j);
					for(int k = num3.size(); k < b;k++)
						num3 = "0" + num3;
					cout << num2+num+num3;
					return 0;
				}		
			}
			count--;
			b = 0;	
		}
		else
		{
			if(count == n)
			{
				cout << to_string(i)+num;
				return 0;
			}
			else
				num2 = "";
		}
	}

	return 0;
}
