#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n*2 - 1; j++){
			if(j < i) cout << " ";
			else if ((n*2 - (i+1)) <= j) continue;
			else cout << '*';
		}
		cout << '\n';
	}


	return 0;	
} 
