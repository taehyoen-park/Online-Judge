#include<stdio.h>

int main()
{
	char num[11];
	int arr[11] = { 0 },i,max = -1;
	
	scanf("%s",num);
	for(i = 0; num[i] != '\0';i++)
		arr[((int)num[i]-48)]++;
	
	if(arr[6]+arr[9] >= 2)
	{
		arr[6] = (arr[6]+arr[9])/2 + (arr[6]+arr[9])%2;
		arr[9] = 0;
	}
		
	 
	for(i = 0; i <= 9; i++)
	{
		if(max < arr[i])
			max = arr[i];
	}
	printf("%d",max);
	return 0;
}
