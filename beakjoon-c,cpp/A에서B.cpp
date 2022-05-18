#include<iostream>
#include<string>

using namespace std; 
int main()
{
	
	int x,y,count = 1;
	scanf("%d %d",&x,&y);
	
	while(x < y)
	{
		if(y % 2 == 0){
			y = y/2;
		}
		else if(y % 10 == 1){
			y = y/10;
		}
		else
			break;
		count++;
	}
	
	if(x == y)
	{
		printf("%d",count);
		return 0;
	}
	else
	{
		printf("-1");
		return 0;
	}
	return 0;
}
