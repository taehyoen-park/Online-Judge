#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b)//비교함수 
{
	int num1 = *(int *)a;    
	int num2 = *(int *)b;   

	if (num1 < num2)    
		return 1;      

	if (num1 > num2)   
		return -1;       

	return 0;   
}

int main()
{
	int arr[10001] = { 0, }, arr2[5001] = { 0, };
	int n, i, j, sum = 0, count = 4, min = 5;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	qsort(arr, 10001, sizeof(int), compare);//정렬함수 

	for (i = 0; i < n - 1; i++)
		arr2[i] = arr[i] - arr[i + 1];


	for (i = 0; i < n - 1; i++)
	{
		if (arr2[i] > 4)
			continue;
			
		else if (arr2[i] <= 4 && arr2[i] > 0)
		{
			j = 1;
			count--;
			sum += arr2[i];

			while (sum <= 4)
			{
				if ((sum + arr2[i + j]) > 4 || arr2[i+j] == 0)
					break;
					
				else
				{
					count--;
					sum += arr2[i + j];
				}
				j++;
			}

			if (count < min)
				min = count;

			count = 4;
			sum = 0;
		}
		else
			break;
	}

	if (min == 5)
		printf("4");

	else
		printf("%d", min);
	return 0;
}
