#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i,n,count = 0,result = 0;
	int arr[101];

	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%d",arr+i);
	}


	for (i = 0; i < n; i++)
	{
		if (arr[i] == 1)
		{
			count++;
			result += count;
		}
			
		else
			count = 0;
	
	}
	printf("%d", result);
	return 0;
}
