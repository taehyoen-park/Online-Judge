#include<iostream>
#include<string>
#include<cstdio>

using namespace std; 

int main()
{
	string str;
	int count = 0;
	while(getline(cin,str))
	{
		
		int s = 0,b = 0,n = 0,g = 0;
		count++;
		if(count > 100)
			break;
			
		for(int i = 0; i < str.length();i++)
		{
			if ('a' <= str[i] && str[i] <= 'z')
				s++;
			
			else if ('A' <= str[i] && str[i] <= 'Z')
				b++;
			
			else if ('0' <= str[i] && str[i] <= '9')
				n++;
			
			else if (str[i] == ' ')
				g++;
		}
		printf("%d %d %d %d\n",s,b,n,g);
	}
	return 0;
}
