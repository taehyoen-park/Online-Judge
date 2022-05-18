#include<iostream>

using namespace std;

void start(int i,int j,int num)
{
	// i는 세로줄 j는 가로줄 
	if((i / num)%3 == 1 && (j / num)%3 == 1)
		cout << ' ';

	else
	{
		if(num / 3 == 0)
			cout << '*';
		else
			start(i,j,num/3);
	}
	return; 
}

int main()
{
	int num;
	cin >> num;
	for(int i = 0; i < num;i++){
		for(int j = 0; j < num; j++)
			start(i,j,num);
		cout << '\n';
	}
	return 0;
}
