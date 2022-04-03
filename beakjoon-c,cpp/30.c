#include<stdio.h>
#include<stdlib.h>
#define fixnum 100001

int count = 0;

int compare(const void *a, const void *b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	
	if(num1 > num2)
		return -1;
	
	if(num1 < num2)
		return 1;
		
	return 0;	
}

int fuction(char arr[], int arr2[])
{
	int i,num = 0;
	
	for(i = 0; arr[i] != '\0'; i++)
	{		
		arr2[i] = arr[i] - 48;
		num += arr2[i];
	}
	
	qsort(arr2,sizeof(int) * count / sizeof(int),sizeof(int),compare);
	
	if(num % 3 == 0)
	{
		if(arr2[count - 1] != 0)
		{
			return -1;
		}
		
		else
		{
			for(i = 0; i < count -1; i++)
			{
				printf("%d",arr2[i]);
			}
				return arr2[count - 1];
		}
	}
	
	else
	{
		return -1;
	}
	
}

int main()
{
	int i,j;
	char str[fixnum];
	int arr[fixnum];
	
	scanf("%s",str);
	
	for(i = 0; str[i] != '\0'; i++)
	{	
		count++;
	}
	
	printf("%d",fuction(str,arr));

	return 0;
}
