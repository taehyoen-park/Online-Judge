#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	
	while(true)
	{
		getline(cin,str);
		if(cin.eof() == true)
			break;
		cout << str << endl;
	}	
	return 0;
} 
